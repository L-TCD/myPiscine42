/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:05:53 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/22 08:22:17 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort_asc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort_des(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_is_sort_asc(tab, length, f) || ft_is_sort_des(tab, length, f))
		return (1);
	return (0);
}

/*
int	ft_cmp(int n1, int n2)
{
	return (n1 - n2);
}

#include <stdio.h>

int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4};
	int tab2[] = {4, 3, 2, 1, 0};
	int tab3[] = {0, 4, 3, 2, 1};
	int tab4[] = {4, 3, 2, 0, 1};
	int tab5[] = {4, 4, 4, 0, -1};
	printf("asc : %d\n", ft_is_sort(tab, 5, &ft_cmp));
	printf("des : %d\n", ft_is_sort(tab2, 5, &ft_cmp));
	printf("unsort : %d\n", ft_is_sort(tab3, 5, &ft_cmp));
	printf("unsort : %d\n", ft_is_sort(tab4, 5, &ft_cmp));
	printf("des : %d\n", ft_is_sort(tab5, 5, &ft_cmp));
}
*/

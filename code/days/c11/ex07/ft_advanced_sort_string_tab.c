/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:38:39 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/22 09:38:42 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	super_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (cmp(tab[i], tab[j]) > 0)
			{
				super_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}

/*

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	(void)ac;

	ft_advanced_sort_string_tab(av, ft_strcmp);
	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
}

*/

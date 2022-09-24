/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:09:39 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/22 07:15:17 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	i = 0;
	ret = malloc(sizeof(*tab) * length);
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}

/*
int	ft_putint(int i)
{
	char	c;

	c = '0' + i;
	write (1, &c, 1);
	return (i);
}
int main(void)
{
	int	tab[3];
	int	*tab2;

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;

	tab2 = ft_map(tab, 3, ft_putint);
	return (0);
}
*/

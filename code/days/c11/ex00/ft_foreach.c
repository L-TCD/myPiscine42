/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:11:59 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/22 07:54:47 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*

#include <unistd.h>

void	ft_putint(int a)
{
	char	c;

	c = '0' + a;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	c = '-';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, &c, 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putint((nb % 10));
	}
	else
		ft_putint((nb % 10));
}

int	main(void)
{
	int		tab[1337];
	int		i;

	i = 0;
	while (i < 1337)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 1337, ft_putnbr);
	return (0);
}

*/

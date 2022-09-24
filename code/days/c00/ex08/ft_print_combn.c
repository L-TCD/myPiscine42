/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:26:19 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/02 09:38:15 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	char	c;

	c = '0' + i;
	ft_putchar(c);
}

void	ft_print_comb(int n, int *tab, int first)
{
	int	i;

	i = 0;
	if (first == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	while (i < n)
	{
		ft_putnbr(tab[i]);
		i++;
	}
}

void	ft_increment(int n, int *tab)
{
	int	i;
	int	max;

	max = 9;
	i = n - 1;
	while (tab[i] == max)
	{
		i--;
		max--;
	}
	tab[i]++;
	while (i < n)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	i = 0;
	while (i < 10)
	{
		tab[i] = i;
		i++;
	}
	ft_print_comb(n, tab, 1);
	while (tab[0] != (10 - n))
	{
		if (tab[n - 1] != 9)
		{	
			tab[n - 1]++;
		}
		else
		{
			ft_increment(n, tab);
		}
		ft_print_comb(n, tab, 0);
	}
}

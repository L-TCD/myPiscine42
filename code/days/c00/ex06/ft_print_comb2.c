/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:53:08 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/01 12:05:50 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_ab(int a, int b)
{
	char	da;
	char	ca;
	char	db;
	char	cb;

	da = a / 10 + 48;
	ca = a % 10 + 48;
	db = b / 10 + 48;
	cb = b % 10 + 48;
	write(1, &da, 1);
	write(1, &ca, 1);
	write(1, " ", 1);
	write(1, &db, 1);
	write(1, &cb, 1);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_ab(a, b);
			b++;
		}
		a++;
	}	
}

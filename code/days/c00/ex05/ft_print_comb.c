/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:31:46 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/01 10:18:11 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint_abc(int a, int b, int c)
{
	char	ca;
	char	cb;
	char	cc;

	ca = a + 48;
	cb = b + 48;
	cc = c + 48;
	write(1, &ca, 1);
	write(1, &cb, 1);
	write(1, &cc, 1);
	if (!(a == 7 && b == 8 && c == 9))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putint_abc(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

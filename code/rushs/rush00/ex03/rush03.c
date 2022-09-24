/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:59:50 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/03 16:24:27 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char left, char mid, char right, int x)
{
	if (x > 0)
	{
		ft_putchar(left);
		x--;
	}
	while (x > 1)
	{
		ft_putchar(mid);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_line('A', 'B', 'C', x);
		y--;
		while (y > 1)
		{
			ft_print_line('B', 32, 'B', x);
			y--;
		}
		if (y == 1)
		{
			ft_print_line('A', 'B', 'C', x);
		}
	}
}

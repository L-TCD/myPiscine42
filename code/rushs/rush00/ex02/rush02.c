/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:16:35 by mabertha          #+#    #+#             */
/*   Updated: 2022/09/03 16:16:42 by mabertha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(char ext, char inte, int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar(ext);
		else
			ft_putchar(inte);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	j = 1;
	while (j <= y)
	{
		if (j == 1)
			ft_print_line('A', 'B', x);
		else if (j == y)
			ft_print_line('C', 'B', x);
		else
			ft_print_line('B', ' ', x);
		j++;
	}
}

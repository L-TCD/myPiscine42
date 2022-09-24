/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:46:31 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/22 11:23:58 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_op(char c)
{
	if (c == '+')
		return (0);
	if (c == '-')
		return (1);
	if (c == '/')
		return (2);
	if (c == '*')
		return (3);
	if (c == '%')
		return (4);
	return (-1);
}

void	do_op(int a, char op, int b)
{
	int	(*tab[5])(int, int);
	int	i;
	int	res;

	tab[0] = &sum;
	tab[1] = &sub;
	tab[2] = &div;
	tab[3] = &mult;
	tab[4] = &mod;
	i = check_op(op);
	if (i == -1)
		res = 0;
	res = (*tab[i])(a, b);
	ft_putnbr(res);
	write(1, "\n", 1);
}

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && is_in_charset(argv[2][0], "+-/*%"))
		{
			if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
				write(1, "Stop : division by zero\n", 24);
			else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
				write(1, "Stop : modulo by zero\n", 22);
			else
				do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
		}
		else
			write(1, "0\n", 2);
	}
	return (0);
}

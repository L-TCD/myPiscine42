/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:11:34 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/21 13:11:40 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_chr_is_printable(char chr)
{
	if (chr < ' ' || chr == 127)
		return (0);
	else
		return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char n)
{
	char			*base;
	unsigned char	c;

	c = (unsigned char)n;
	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_chr_is_printable(str[i]))
			ft_putchar(str[i]);
		else
			ft_puthex(str[i]);
		i++;
	}
}

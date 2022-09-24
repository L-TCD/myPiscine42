/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:45:28 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/17 18:39:30 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

unsigned int	ft_unsigned_atoi(char *str)
{
	int				i;
	unsigned int	result;

	i = 0;
	result = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11
		|| str[i] == 12 || str[i] == 13 || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result);
}

char	*ft_uitoa(unsigned int nbr)
{
	unsigned int	nb;
	char			*str;
	int				size;

	size = 1;
	nb = nbr;
	while (nb >= 10)
	{
		nb = nb / 10;
		size++;
	}
	str = malloc(size + 1);
	str[size] = '\0';
	size--;
	while (size >= 0)
	{
		str[size] = '0' + (nbr % 10);
		nbr = nbr / 10;
		size--;
	}
	return (str);
}

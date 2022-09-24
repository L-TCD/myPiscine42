/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcassagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:33:16 by rcassagn          #+#    #+#             */
/*   Updated: 2022/09/18 16:19:58 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_dict.h"

void	ft_print(unsigned int nb, char *str, struct s_dict *dict);

void	ft_wich_print(unsigned int nb, char *str, struct s_dict *dict)
{
	if (nb >= 0 && nb <= 20)
		ft_print(nb, str, dict);
	if (nb >= 21 && nb <= 99)
	{
		ft_print((nb / 10) * 10, str, dict);
		if (nb % 10 != 0)
			ft_print(nb % 10, str, dict);
	}
	if (nb >= 100 && nb <= 999)
	{
		ft_print(nb / 100, str, dict);
		ft_print(100, str, dict);
		if (nb % 10 != 0)
			ft_wich_print(nb % 100, str, dict);
	}
	if (nb >= 1000 && nb <= 9999)
	{
		ft_print(nb / 1000, str, dict);
		ft_print(1000, str, dict);
		ft_wich_print(nb % 1000, str, dict);
	}
}

void	ft_wich_print2(unsigned int nb, char *str, struct s_dict *dict)
{
	if (nb < 10000)
		ft_wich_print(nb, str, dict);
	if (nb >= 10000 && nb <= 99999)
	{
		ft_wich_print2(nb / 1000, str, dict);
		ft_print(1000, str, dict);
		ft_wich_print2(nb % 1000, str, dict);
	}
	if (nb >= 100000 && nb <= 999999)
	{
		ft_print(nb / 100000, str, dict);
		ft_print(100, str, dict);
		ft_print(1000, str, dict);
		if (nb % 100000 != 0)
			ft_wich_print2(nb % 100000, str, dict);
	}
	if (nb >= 1000000 && nb <= 9999999)
	{
		ft_print(nb / 1000000, str, dict);
		ft_print(1000000, str, dict);
		if (nb % 1000000 != 0)
			ft_wich_print2(nb % 1000000, str, dict);
	}
}

void	ft_wich_print3(unsigned int nb, char *str, struct s_dict *dict)
{
	if (nb < 10000000)
		ft_wich_print2(nb, str, dict);
	if (nb >= 10000000 && nb <= 99999999)
	{
		ft_wich_print3(nb / 1000000, str, dict);
		ft_print(1000000, str, dict);
		if (nb % 10000000 != 0)
			ft_wich_print3(nb % 1000000, str, dict);
	}
	if (nb >= 100000000 && nb <= 999999999)
	{
		ft_wich_print3(nb / 100000000, str, dict);
		ft_print(100, str, dict);
		ft_print(1000000, str, dict);
		if (nb % 100000000 != 0)
			ft_wich_print3(nb % 100000000, str, dict);
	}
	if (nb >= 1000000000 && nb <= 4294967295)
	{
		ft_wich_print3(nb / 1000000000, str, dict);
		ft_print(1000000000, str, dict);
		if (nb % 1000000000 != 0)
			ft_wich_print3(nb % 1000000000, str, dict);
	}
}

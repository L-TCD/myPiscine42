/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 05:57:28 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/14 18:23:27 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	pos_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_strlen(base) - 1)
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j]
				|| base[i] == '+' || base[i] == '-' || ft_isspace(base[i])
				|| base[j] == '+' || base[j] == '-' || ft_isspace(base[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (!(base_is_valid(base)))
		return (0);
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (pos_in_base(str[i], base) != -1)
	{
		res = res * ft_strlen(base) + pos_in_base(str[i], base);
		i++;
	}
	return (sign * res);
}

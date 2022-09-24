/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unsigned_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:53:59 by diberger          #+#    #+#             */
/*   Updated: 2022/09/18 17:54:11 by diberger         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*get_final_str(void)
{
	char	*str;

	str = malloc(sizeof(char) * 200);
	if (!str)
		return (NULL);
	return (str);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	is_unsigned_number(char *str)
{
	char	*max;
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+')
			i++;
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	max = "4294967295";
	if (ft_strcmp(max, str) < 0)
		return (0);
	return (1);
}

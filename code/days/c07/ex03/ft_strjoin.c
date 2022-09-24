/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:22:01 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/12 16:28:07 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (1);
	while (j < size)
	{
		i += ft_strlen(strs[j]);
		j++;
		if (j < size)
			i += ft_strlen(sep);
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dest = malloc(sizeof(char) * (ft_count(size, strs, sep) + 1));
	if (!(dest))
	{
		dest = NULL;
		return (dest);
	}
	dest[0] = '\0';
	while (j < size)
	{
		dest = ft_strcat(dest, strs[j]);
		j++;
		if (j < size)
			dest = ft_strcat(dest, sep);
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_to_tab2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:51:38 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/17 17:51:41 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = NULL;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		while (!is_sep(str[i], charset))
			i++;
		count++;
	}
	return (count);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	if (i > n)
		i = n;
	dest = malloc(i + 1);
	if (!dest)
		return (dest);
	while (j < i)
	{
		dest[j] = str[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

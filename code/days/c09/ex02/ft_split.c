/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:14:43 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/21 08:46:44 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
		while (str[i] != '\0' && is_sep(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != '\0' && !is_sep(str[i], charset))
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

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		index;

	index = 0;
	tab = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (!tab)
		return (tab);
	i = 0;
	while (str[i])
	{
		while (str[i] != '\0' && is_sep(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		j = i;
		while (str[i] != '\0' && !is_sep(str[i], charset))
			i++;
		tab[index++] = ft_strndup(&str[j], (i - j));
	}
	tab[count_word(str, charset)] = 0;
	return (tab);
}

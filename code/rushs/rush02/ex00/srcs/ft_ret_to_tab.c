/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:59:04 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/17 16:59:07 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strndup(char *str, int n);
int		is_sep(char c, char *charset);
int		count_word(char *str, char *charset);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
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
		while (is_sep(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		j = i;
		while (!is_sep(str[i], charset) && str[i] != '\0')
			i++;
		tab[index++] = ft_strndup(&str[j], (i - j));
	}
	tab[count_word(str, charset)] = 0;
	return (tab);
}

struct s_dict	*ft_ret_to_tab(char *buf)
{
	int				j;
	struct s_dict	*dict;
	char			**strs;

	strs = ft_split(buf, " \n:\t");
	dict = malloc(sizeof(*dict) * (count_word(buf, " :\n\t") + 1));
	if (!(dict))
		return (NULL);
	j = 0;
	while ((j * 2) < count_word(buf, " :\n\t"))
	{
		dict[j].key = ft_strdup(strs[(j * 2)]);
		j++;
	}
	j = 0;
	while ((j * 2 + 1) < count_word(buf, " :\n\t"))
	{
		dict[j].value = ft_strdup(strs[(j * 2 + 1)]);
		j++;
	}
	dict[j].key = 0;
	dict[j].value = 0;
	return (dict);
}

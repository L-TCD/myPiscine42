/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:58:55 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/18 16:11:49 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

char			*ft_uitoa(unsigned int nbr);
struct s_dict	*get_dict(void);
char			*ft_strcat(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);

void	ft_print(unsigned int nb, char *str, struct s_dict *dict)
{
	char			*str_key;
	int				i;

	str_key = ft_uitoa(nb);
	i = 0;
	while (dict[i].value)
	{
		if (ft_strcmp(str_key, dict[i].key) == 0)
		{
			ft_strcat(str, dict[i].value);
			ft_strcat(str, " ");
			break ;
		}
		i++;
	}
}

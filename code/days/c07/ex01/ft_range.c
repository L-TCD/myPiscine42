/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 08:47:51 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/12 16:27:42 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = 0;
	if (min < max)
	{
		tab = (int *)malloc(sizeof(int) * (max - min));
		if (tab != 0)
		{
			while (i < (max - min))
			{
				tab[i] = (min + i);
				i++;
			}
		}
	}
	return (tab);
}

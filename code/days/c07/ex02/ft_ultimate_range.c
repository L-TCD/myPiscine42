/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 07:37:35 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/12 16:27:55 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = 0;
	if (min >= max)
	{
		tab = 0;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (!(tab))
		return (-1);
	while (i < (max - min))
	{
		tab[i] = (min + i);
		i++;
	}
	*range = tab;
	return (i);
}

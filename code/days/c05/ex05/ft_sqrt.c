/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:49:29 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/11 16:59:29 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
  printf("%d\n", ft_sqrt(1));
  printf("%d\n", ft_sqrt(-1));
  printf("%d\n", ft_sqrt(0));
  printf("%d\n", ft_sqrt(1));
  printf("%d\n", ft_sqrt(2));
  printf("%d\n", ft_sqrt(3));
  printf("%d\n", ft_sqrt(4));
  printf("%d\n", ft_sqrt(25));
  printf("%d\n", ft_sqrt(5000));
  printf("%d\n", ft_sqrt(2147395600));
  printf("%d\n", ft_sqrt(2147483647));
}
*/

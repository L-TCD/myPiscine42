/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:10:41 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/11 16:47:37 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
  if (index == 1)
		return (1);
	return ((ft_fibonacci(index - 1) + ft_fibonacci(index - 2)));
//f(3)   =              2          +           1                   =  3
}

#include <stdio.h>

int main(void)
{
  printf("%d\n", ft_fibonacci(-1));
  printf("%d\n", ft_fibonacci(0));
  printf("%d\n", ft_fibonacci(1));
  printf("%d\n", ft_fibonacci(2));
  printf("%d\n", ft_fibonacci(3));
  printf("%d\n", ft_fibonacci(4));
  printf("%d\n", ft_fibonacci(5));
  printf("%d\n", ft_fibonacci(6));
  printf("%d\n", ft_fibonacci(7));
  printf("%d\n", ft_fibonacci(8));
}


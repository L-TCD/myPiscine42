/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:53:25 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/14 18:23:57 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(INT_MIN, "0123456789ABCDEF");
	write (1, "\n", 1);
	ft_putnbr_base(0, "0123456789ABCDEF");
	write (1, "\n", 1);
	ft_putnbr_base(0, "0012345678");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:23:33 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/14 18:23:36 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	 printf("%d\n", ft_atoi_base("789", "0123456789ABCDEF"));
	//  printf("%d\n", ft_atoi_base("tulas", "salutqwery"));
	// printf("%d\n", ft_atoi_base("      ---+--+12340wiucgig56468", "0123456789"));
	//  printf("%d\n", ft_atoi_base("K      ---+--+-000012934ab567", ""));
}

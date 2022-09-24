/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:09:38 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/22 11:09:54 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>

int		check_op(char c);
void	do_op(int a, char op, int b);
int		sum(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		mult(int a, int b);
int		mod(int a, int b);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putint(int a);
void	ft_putnbr(int nb);

#endif

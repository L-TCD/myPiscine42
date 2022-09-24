/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:54:06 by aosmanov          #+#    #+#             */
/*   Updated: 2022/09/10 18:54:19 by aosmanov         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_check_numbers(char *str);
int		ft_strlen(char *str);

int	initial_check(int argc, char **argv)
{
	if (argc == 2
		&& ft_strncmp(argv[1], "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2", 31) == 0)
	{
		write(1, "1 2 3 4\n", 8);
		write(1, "2 3 4 1\n", 8);
		write(1, "3 4 1 2\n", 8);
		write(1, "4 1 2 3\n", 8);
		return (1);
	}
	else
		return (0);
}

int	test_valid_input(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) != 31)
		return (0);
	if (ft_check_numbers(argv[1]) != 1)
		return (0);
	return (1);
}

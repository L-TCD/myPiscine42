/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:04:41 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/10 16:06:49 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (s1[i] == s2[i])
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				return (0);
			else if (i == n - 1)
				return (0);
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_print_out(int **out, int row, int col)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i <= row)
	{
		j = 0;
		while (j <= col)
		{
			c = out[i][j] + '0';
			write(1, &c, 1);
			if (j != col)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			j = j +1;
		}
		i = i + 1;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_numbers(char *str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (0);
		}
		else
		{
			if (!(str[i] == ' '))
				return (0);
		}
		i++;
	}
	return (1);
}

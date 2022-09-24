/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:33:07 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/10 16:10:57 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		initial_check(int argc, char **argv);
int		test_valid_input(int argc, char **argv);
void	check_input_col_four(int **out, int **col);
void	ft_print_out(int **out, int row, int col);
void	fill_input_four(int *out, int col, int row);
void	free_memory(int **arr);

int	**init_array_output(void)
{
	int	**out;
	int	i;
	int	j;

	i = 0;
	out = malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		out[i] = malloc(sizeof(int) * 4);
		i++;
	}
	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			out[i][j] = 0;
			j++;
		}
		i++;
	}
	return (out);
}

int	**save_row_input(char **argv)
{
	int	**row;
	int	k;
	int	i;

	k = 0;
	i = 0;
	row = malloc(sizeof(int *) * 4);
	while (k < 4)
		row[k++] = malloc(sizeof(int) * 2);
	k = 16;
	while (k <= 30)
	{
		if (k > 14 && k <= 22)
			row[i][0] = -48 + argv[1][k];
		if (k == 24)
			i = 0;
		if (k > 22 && k <= 30)
			row[i][1] = -48 + argv[1][k];
		i++;
		k = k + 2;
	}
	return (row);
}

int	**save_col_imput(char **argv)
{
	int	**col;
	int	k;
	int	i;

	k = 0;
	i = 0;
	col = malloc(sizeof(int *) * 4);
	while (k < 4)
		col[k++] = malloc(sizeof(int) * 2);
	k = 0;
	while (k <= 14)
	{
		if (k <= 6)
			col[i][0] = -48 + argv[1][k];
		if (k == 8)
			i = 0;
		if (k > 6 && k <= 14)
			col[i][1] = -48 + argv[1][k];
		i++;
		k = k + 2;
	}
	return (col);
}

void	free_memory(int **arr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	main(int argc, char **argv)
{
	int	**out;
	int	**col;
	int	**row;

	if (initial_check(argc, &argv[0]))
		return (0);
	else
		write(1, "Error\n", 6);
	return (0);
	if (test_valid_input(argc, &argv[0]))
	{
		out = init_array_output();
		row = save_row_input(&argv[0]);
		col = save_col_imput(&argv[0]);
		check_input_col_four(out, col);
		ft_print_out(out, 3, 3);
		free_memory(out);
		free_memory(col);
		free_memory(row);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

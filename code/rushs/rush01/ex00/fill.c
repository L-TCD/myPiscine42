/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrago-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:44:53 by adrago-b          #+#    #+#             */
/*   Updated: 2022/09/11 15:44:57 by adrago-b         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	check_input_col_four(int **out, int **col);
void	fill_input_col_four(int **out, int i, int j);

void	check_input_col_four(int **out, int **col)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 2)
		{
			if (col[i][j] == 4)
			{
				fill_input_col_four(out, i, j);
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	fill_input_col_four(int **out, int i, int j)
{
	int	k;

	if (j == 0)
	{
		k = 0;
		while (k < 4)
		{
			out[k][i] = k + 1;
			k++;
		}
	}
	else if (j == 1)
	{
		k = 3;
		while (k >= 0)
		{
			out[k][i] = 4 - k;
			k--;
		}
	}
}

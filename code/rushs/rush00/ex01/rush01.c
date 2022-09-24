/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:13:26 by tleroy            #+#    #+#             */
/*   Updated: 2022/09/04 16:00:58 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_imprimer_ligne(int x_max, char ext1, char inte, char ext2)
{
	int	compteur_x;	

	compteur_x = 1;
	ft_putchar(ext1);
	compteur_x++;
	while (compteur_x != x_max)
	{
		ft_putchar(inte);
		compteur_x++;
	}
	if (compteur_x == x_max)
	{
		ft_putchar(ext2);
		compteur_x++;
		ft_putchar('\n');
	}
}

void	rush(int x_max, int y_max)
{
	int	compteur_y;

	compteur_y = 1;
	if ((x_max > 0) && (y_max > 0))
	{
		ft_imprimer_ligne(x_max, '/', '*', '\\');
		compteur_y++;
		while (compteur_y != y_max)
		{
			ft_imprimer_ligne(x_max, '*', ' ', '*');
			compteur_y++;
		}
		if (compteur_y == y_max)
		{
			ft_imprimer_ligne(x_max, '\\', '*', '/');
		}
	}
}

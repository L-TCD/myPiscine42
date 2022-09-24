/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:08:56 by tleroy            #+#    #+#             */
/*   Updated: 2022/09/04 15:49:12 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_imprimer_ligne(int x_max, char ext, char inte)
{
	int	compteur_x;

	compteur_x = 1;
	ft_putchar(ext);
	compteur_x++;
	while (compteur_x != x_max)
	{
		ft_putchar(inte);
		compteur_x++;
	}
	if (compteur_x == x_max)
	{
		ft_putchar(ext);
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
		ft_imprimer_ligne(x_max, 'o', '-');
		compteur_y++;
		while (compteur_y != y_max)
		{
			ft_imprimer_ligne(x_max, '|', ' ');
			compteur_y++;
		}
		if (compteur_y == y_max)
		{
			ft_imprimer_ligne(x_max, 'o', '-');
		}	
	}
}

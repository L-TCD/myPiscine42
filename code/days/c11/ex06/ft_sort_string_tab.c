/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:03:49 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/22 09:26:40 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				ptr = tab[i];
				tab[i] = tab[j];
				tab[j] = ptr;
			}
			j++;
		}
		i++;
	}
}

/*

#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	(void)ac;

	ft_sort_string_tab(av);
	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
}

*/

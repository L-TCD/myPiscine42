/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:55:44 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/18 17:53:02 by diberger         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_dict.h"

#define BUF_SIZE 4096

struct s_dict	*ft_ret_to_tab(char *buf);
int				is_unsigned_number(char *str);
void			ft_putstr(char *str);
void			ft_wich_print3(unsigned int nb, char *str, struct s_dict *dict);
unsigned int	ft_unsigned_atoi(char *str);
int				ft_strlen(char *str);
char			*get_final_str(void);

struct s_dict	*get_dict(void)
{
	int				fd;
	int				ret;
	char			buf[BUF_SIZE + 1];
	struct s_dict	*dict;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		ft_putstr("open() failed\n");
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	dict = ft_ret_to_tab(buf);
	if (close(fd) == -1)
		ft_putstr("close() failed\n");
	return (dict);
}

struct s_dict	*get_user_dict(char *path)
{
	int				fd;
	int				ret;
	char			buf[BUF_SIZE + 1];
	struct s_dict	*dict;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		ft_putstr("open() failed\n");
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	dict = ft_ret_to_tab(buf);
	if (close(fd) == -1)
		ft_putstr("close() failed\n");
	return (dict);
}

void	free_dict(struct s_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].value)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
}

void	ft_final_write(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len - 1)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	struct s_dict	*dict;
	char			*str;

	if (ac == 2 || ac == 3)
	{
		if (!is_unsigned_number(av[(ac - 1)]))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (ac == 2)
			dict = get_dict();
		else
			dict = get_user_dict(av[1]);
	}
	else
		dict = NULL;
	if (!dict)
		write(1, "Dict Error\n", 11);
	str = get_final_str();
	ft_wich_print3(ft_unsigned_atoi(av[(ac - 1)]), str, dict);
	ft_final_write(str);
	free_dict(dict);
	return (0);
}

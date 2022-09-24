/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 05:46:49 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/08 08:44:55 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else if (i == n - 1)
			return (0);
		i++;
	}
	return (s1 - s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len_str;
	int	i;

	len_str = ft_strlen(str);
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (!(ft_strncmp(&str[i], &to_find[0], ft_strlen(to_find))))
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

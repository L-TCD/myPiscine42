#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	int	bool;

	bool = ft_str_is_alpha("1abcdef");

	printf("%d", bool);

	return (0);
}	
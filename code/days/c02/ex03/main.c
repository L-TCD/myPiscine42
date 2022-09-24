#include <stdio.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	int	bool;

	bool = ft_str_is_numeric("A1234567890");

	printf("%d", bool);

	return (0);
}	
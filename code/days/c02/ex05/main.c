#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	int	bool;

	bool = ft_str_is_uppercase("QWERTY");

	printf("%d", bool);

	return (0);
}	
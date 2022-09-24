#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	int	bool;
	char c;
	char *str;

	c = 10;
	str = &c;
	bool = ft_str_is_printable(str);
	printf("%d", bool);
	bool = ft_str_is_printable("UCOUDECYYUCV");
	printf("%d", bool);
	return (0);
}	
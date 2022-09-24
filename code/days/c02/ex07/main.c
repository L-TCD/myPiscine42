#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "ABC./*-abc";

	printf("%s", ft_strupcase(str));
	return (0);
}

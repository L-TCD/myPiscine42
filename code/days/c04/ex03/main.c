#include <ctype.h>
#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	int i = 0;
	char c;

	while (i <= 127)
	{
		c = i;
		if (isspace(i))
			printf("%d : %d\n", i, isspace(i));
		i++;
	}

	printf("%d\n", ft_atoi("      ---+--+00001       234ab567"));
	printf("%d\n", ft_atoi("      ---+--+00001234ab567"));
	printf("%d\n", ft_atoi("      ---+--+0a0001234ab567"));
	printf("%d\n", ft_atoi("      ---+--+-00001234ab567"));
}

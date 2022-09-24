#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un BLAZE";
	printf("%s\n", str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}	
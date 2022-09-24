#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "abc123def";
	char	to_find[] = "3d";

	printf("ft : %s\n", ft_strstr(str, to_find));
	printf("strstr : %s\n", strstr(str, to_find));
	return (0);
}

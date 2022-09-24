#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src1[] = "def";
	char	dest1[7] = "abc";
	char	src2[] = "def";
	char	dest2[7] = "abc";

	printf("ft : %s\n", ft_strcat(dest1, src1));
	printf("strcat : %s\n", strcat(dest2, src2));
	return (0);
}

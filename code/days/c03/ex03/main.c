#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src1[] = "def";
	char	dest1[7] = "abc";
	char	src2[] = "def";
	char	dest2[7] = "abc";
	unsigned int	n;

	n = 2;
	printf("ft : %s\n", ft_strncat(dest1, src1, n));
	printf("strncat : %s\n", strncat(dest2, src2, n));
	return (0);
}

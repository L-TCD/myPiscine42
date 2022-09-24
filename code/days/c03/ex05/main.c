#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src1[] = "01234567890123456789";
	char	dest1[500] = "abcdefghij";
	char	src2[] = "01234567890123456789";
	char	dest2[500] = "abcdefghij";
	unsigned int n;

	n = 25;
	printf("ft_strlcat : %s:%u\n", dest1, ft_strlcat(dest1, src1, n));
	printf("strlcat :%s:%lu\n", dest2, strlcat(dest2, src2, n));
	return (0);
}

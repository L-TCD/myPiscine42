#include <stdio.h>
#include <string.h>

 unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "abc";
	char	dest[11] = "01234";
	char	src2[] = "abc";
	char	dest2[11] = "01234";
    unsigned    int result;
    unsigned    int result2;

	result = ft_strlcpy(dest, src, 4);
    printf("%s\n", dest);
	printf("%u\n", result);
    result2 = strlcpy(dest2, src2, 4);
    printf("%s\n", dest2);
	printf("%u\n", result2);

	return (0);
}

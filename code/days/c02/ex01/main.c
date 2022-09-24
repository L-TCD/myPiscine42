#include <stdio.h>
#include <string.h>


char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "abcdef";
	char	dest[] = "zyxwvutsrq";
	char	src2[] = "abcdef";
	char	dest2[] = "zyxwvutsrq";

	ft_strncpy(dest, src, 2);
	printf("%s\n", dest);
	strncpy(dest2, src2, 2);
	printf("%s\n", dest2);

	return (0);
}

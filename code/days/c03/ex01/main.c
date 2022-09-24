#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "ab";
	char	s2[] = "acb";
	unsigned int	n;
	int	result;
	int	result2;

	n = 2;
	result = ft_strncmp(s1, s2, n);
	printf("ft : %d\n", result);
    result2 = strncmp(s1, s2, n);
	printf("strncmp : %d\n", result2);

	return (0);
}

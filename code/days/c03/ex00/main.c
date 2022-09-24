#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "a";
	char	s2[] = "ab";
	int	result;
	int	result2;

	result = ft_strcmp(s1, s2);
	printf("ft : %d\n", result);
    result2 = strcmp(s1, s2);
	printf("strcmp : %d\n", result2);

	return (0);
}

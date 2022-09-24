#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	*dest;

	dest = ft_strjoin((argc - 2), &argv[2], argv[1]);
	printf("%s\n", dest);
	return (0);
}

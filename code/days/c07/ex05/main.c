#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**strs;
	int		i;

	strs = ft_split("df dfdef ", "df dfv dfv");
	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i++]);
		free(strs[i]);
	}
	free(strs);
	return (0);
}

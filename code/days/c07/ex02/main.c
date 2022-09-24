#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int	i;
	int	*tab;

	tab = 0;
	i = 0;
	printf("%d\n", ft_ultimate_range(&tab, 3, 33));
	while(i < (33 - 3))
		printf("%d\n", tab[i++]);
	printf("%d\n", ft_ultimate_range(&tab, 3, 3));
}

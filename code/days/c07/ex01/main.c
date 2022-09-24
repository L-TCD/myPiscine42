#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int	i;
	int	*tab;

	i = 0;
	printf("%p\n", ft_range(3, 3));
	tab = ft_range(3, 33);
	printf("%p\n", tab);
	while(i < (33 - 3))
		printf("%d\n", tab[i++]);
}

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	printf("%d okok\n", ft_recursive_power(2, 3));
	printf("%d okok\n", ft_recursive_power(0, 0));
	printf("%d okok\n", ft_recursive_power(-2, 0));
	printf("%d okok\n", ft_recursive_power(-2, -1));
	return (0);
}

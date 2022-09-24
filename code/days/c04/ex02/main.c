#include <limits.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(INT_MAX);
	printf("\n");
	ft_putnbr(INT_MIN);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(456);
	printf("\n");
	return (0);
}

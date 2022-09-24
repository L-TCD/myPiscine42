#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	struct s_stock_str	*res;

	res = ft_strs_to_tab((argc - 1), &argv[1]);
	return (0);
}

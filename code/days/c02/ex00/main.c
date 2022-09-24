#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[7] = "salut !";
	char	dest[14] = "hello les amis";
	
	ft_strcpy(dest, src);
	printf("src : %s /dest : %s \n", src, dest);
	return (0);
}	
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int	main()
{
	char *a = "hello";
	char *b = "hello";
	printf("address 1 : %p\n", a);
	printf("address 2 : %p\n", b);
	printf("%d\n", ft_memcmp(a, b, -1));
	return (0);
}
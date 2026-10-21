#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char	f(int n)
{
	int sign = -1;
	return (sign * n);
}

int	main()
{
	printf("mine : %d\n",ft_atoi("-9223372036854775809"));
	printf("original : %d\n",atoi("-9223372036854775809"));
	return (0);
}
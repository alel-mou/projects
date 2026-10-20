#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main()
{
	int	x = 257;
	printf("%zu\n",ft_strlen((unsigned char *) &x));
    return (0);
}
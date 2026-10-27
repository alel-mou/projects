#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest[100] = "ABCDEF";
	ft_memmove(dest , dest + 1, 6);
	printf("%s\n", dest);
	return (0);
};
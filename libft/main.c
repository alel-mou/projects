#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <bsd/string.h>
#include <string.h>

int	main()
{
	char ptr[4];
	ft_memset(ptr, 0x39, 1);
	ft_memset(ptr + 1, 5, 1);
	ft_memset(ptr + 2, 0, 1);
	ft_memset(ptr + 3, 0, 1);
	printf("%d\n", *(int *)ptr);
	return (0);
}

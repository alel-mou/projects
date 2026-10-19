#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char	dst[100] = "hello";
	char	*src = "alaa";
	size_t	ret = ft_strlcat(dst, src, 9);
	printf("ret : %zu string : %s\n", ret, dst);
    return (0);
}
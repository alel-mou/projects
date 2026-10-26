#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	char	bs[20] = "hello";
	char	dst[3] = "ABC";
	char	src[] = "XYZ";
	size_t	n = ft_strlcat(dst, src, 3);
	printf("length : %zu\n", n);
	// printf("dst : %s\n", dst);
	return (0);
}
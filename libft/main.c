#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <ctype.h>

int	main()
{
	printf("%zu\n", ft_strlcpy(NULL, "hello", 0));
    return (0);
}
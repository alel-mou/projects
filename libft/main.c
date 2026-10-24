#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int	main()
{
	char	**p = ft_split(",\0", ',');
	char	**tmp = p;
	while (*tmp)
	{
		if (!*tmp)
			printf("NULL");
		else
			printf("%s\n", *tmp);
		tmp++;
	}
	return (0);
}
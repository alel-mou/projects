#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int	main()
{
	char	*s = ft_strjoin("12", "23");
	if (!s)
		printf("NULL\n");
	else
		printf("%s\n", s);
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main()
{
	char	dest[] = "hello";
	char	src[] = "nice";
	memcpy(dest, src, 4);
	printf("dest : %s\n",dest);
	return (0);
}
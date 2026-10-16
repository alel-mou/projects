#include <stdio.h>
void *memset(void *s, int c, size_t n);
int	main()
{
	int	x;
	memset(&x, 1, 2);
	printf("x : %d\n", x);
	return (0);
}
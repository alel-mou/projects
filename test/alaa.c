#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main()
{
	write(2, "hello\0", 6);
	return (0);
}
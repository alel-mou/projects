#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char	s1[6] = "ABCDE";
	ft_memmove(s1, s1 + 1, 4);
	printf("first : %s\n", s1);
	char	s2[6] = "ABCDE";
	ft_memmove(s2 + 1, s2, 4);
	printf("second : %s\n", s2);
    return (0);
}
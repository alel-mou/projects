#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void	ft_printlst(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main()
{
	int	x = 4;
	int	y = 8;
	int	z = 10;
	int	t = 0;
	t_list	*node1 = ft_lstnew(&x);
	t_list	*node2 = ft_lstnew(&y);
	t_list	*node3 = ft_lstnew(&z);
	t_list	*node4 = ft_lstnew(&t);
	t_list	*lst = NULL;
	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, NULL);
	ft_lstadd_back(&lst, node4);
	ft_printlst(lst);
	printf("%u\n", ft_lstsize(lst));
	t_list	*last = ft_lstlast(lst);
	printf("last : %d\n", *(int *)last->content);
	return (0);
}
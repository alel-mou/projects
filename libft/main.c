#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <bsd/string.h>
#include <string.h>

void	ft_printlst(t_list *lst)
{
	while (lst)
	{
		printf("%d ->", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void	*f(void *v)
{
	int	*p = malloc(sizeof(int));
	*p = (*(int *)v) * 2;
	return (p);
}

void	del(void *add)
{
	free(add);
}

int	main()
{
	int	x1 = 4;
	int	x2 = 10;
	int	x3 = 8;
	t_list	*lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(&x1));
	ft_lstadd_back(&lst, ft_lstnew(&x2));
	ft_lstadd_back(&lst, ft_lstnew(&x3));
	t_list	*newlst = ft_lstmap(lst, f, del);
	ft_printlst(lst);
	ft_printlst(newlst);
	return (0);
}

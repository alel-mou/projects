/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 01:41:12 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/25 01:41:12 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	ft_lstiter(lst, f);
	newlst = NULL;
	while (lst)
	{
		newnode = ft_lstnew(lst->content);
		if (!newnode)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(newlst, newnode);
		lst = lst->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 00:58:47 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/25 00:58:47 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!lst || !del)
		return ;
	tmp1 = *lst;
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		del(tmp2->content);
		free(tmp2);
	}
	*lst = NULL;
}

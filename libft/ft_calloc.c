/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 19:22:14 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/22 22:50:09 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	void	*p;
	char	*pc;
	size_t	i;

	if (size != 0 && nmem > (size_t)-1 / size)
		return (NULL);
	p = malloc(nmem * size);
	if (!p)
		return (NULL);
	i = 0;
	pc = p;
	while (i < nmem * size)
	{
		pc[i] = 0;
		i++;
	}
	return (p);
}

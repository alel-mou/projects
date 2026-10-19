/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:36:18 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/19 14:40:44 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char 	*s;
	size_t		i;

	d = dest;
	s = src;
	if (dest <= src)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i > 0)
		{
			d[i] = s[i];
			i--;
		}
		d[0] = s[0];
	}
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 23:03:14 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/20 00:01:51 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			len;
	unsigned char	*p;

	len = ft_strlen(s);
	if ((unsigned char)c == 0)
		return ((char *)&s[len]);
	p = (unsigned char *)s;
	while (*p)
	{
		if (*p == (unsigned char)c)
			return ((char *)p);
		p++;
	}
	return (NULL);
}
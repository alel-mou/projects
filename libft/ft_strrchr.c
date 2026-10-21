/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 23:47:14 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/21 13:15:24 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if ((unsigned char)c == (unsigned char)s[i])
			return ((char *)&s[i]);
		i--;
	}
	if ((unsigned char)c == (unsigned char)s[i])
		return ((char *)&s[i]);
	return (NULL);
}

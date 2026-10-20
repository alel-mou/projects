/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 23:47:14 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/20 00:40:39 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;
	char	*p;

	len = ft_strlen(s);
	if ((unsigned char)c == 0)
		return ((unsigned char *)&s[len]);
	if (len == 0)
		return ((char *)s);
	
}
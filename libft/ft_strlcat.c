/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:29:33 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/26 11:52:18 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	d;
	size_t	i;

	src_len = ft_strlen(src);
	if (!dst && !size)
		return (src_len);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	d = dst_len;
	while (src[i] && d < size - 1)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (dst_len + src_len);
}

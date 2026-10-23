/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 03:10:55 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/23 03:10:55 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	p = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		p[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		p[i] = s2[i - s1_len];
		i++;
	}
	p[i] = '\0';
	return (p);
}

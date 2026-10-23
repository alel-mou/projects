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

static char	*ft_handle(char const *s1, char const *s2)
{
	size_t	i;
	char	*p;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		p = malloc((ft_strlen(s2) + 1) * sizeof(char));
		if (!p)
			return (NULL);
		i = 0;
		while (s2[i])
		{
			p[i] = s2[i];
			i++;
		}
	}
	if (!s2)
	{
		p = malloc((ft_strlen(s1) + 1) * sizeof(char));
		if (!p)
			return (NULL);
		i = 0;
		while (s1[i])
		{
			p[i] = s1[i];
			i++;
		}
	}
	return (p);
}

static char	*ft_allocate(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*p;

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
	i = 0;
	while (i < s2_len)
	{
		p[s1_len + i] = s2[i];
		i++;
	}
	p[s1_len + i] = '\0';
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
	{
		return (ft_handle(s1, s2));
	}
	return (ft_allocate(s1, s2));
}

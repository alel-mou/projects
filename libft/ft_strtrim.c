/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 03:49:54 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/23 03:49:54 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isincharset(char c, char const *set)
{
	size_t	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_allocate(char const *s1, int start, int end)
{
	char	*p;
	int		i;

	p = malloc((end - start + 2) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		p[i] = s1[start];
		i++;
		start++;
	}
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (ft_isincharset(s1[i], set))
		i++;
	end = ft_strlen(s1) - 1;
	while (ft_isincharset(s1[end], set))
		end--;
	return (ft_allocate(s1, i, end));
}

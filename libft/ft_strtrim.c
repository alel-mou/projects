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

static int	ft_isincharset(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	char	*ft_handle(char const *s1)
{
	char	*p;
	size_t	i;

	if (!s1)
		return (NULL);
	p = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	return (p);
}

static	void	ft_detect(char const *s1, char const *set, size_t *s, size_t *e)
{
	*s = 0;
	while (ft_isincharset(set, s1[*s]))
		++*s;
	if (!s1[*s])
	{
		*e = *s;
		return;
	}
	*e = ft_strlen(s1) - 1;
	while (ft_isincharset(set, s1[*e]))
		--*e;

}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	n;
	char	*p;

	if (!s1 || !set)
	{
		return (ft_handle(s1));
	}
	ft_detect(s1, set, &start, &end);
	p = malloc((end - start + 2) * sizeof(char));
	if (!p)
		return (NULL);
	n = end - start + 1;
	i = 0;
	while (i < n)
	{
		p[i] = s1[start];
		i++;
		start++;
	}
	return (p);
}

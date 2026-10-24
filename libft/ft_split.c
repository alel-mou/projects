/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:22:33 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/23 20:22:33 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntwords(char const *s, char c)
{
	size_t	i;
	size_t	cw;
	int		first;

	i = 0;
	first = 1;
	cw = 0;
	while (s[i])
	{
		if (s[i] != c && first)
		{
			cw++;
			first = 0;
		}
		if (s[i] == c)
			first = 1;
		i++;
	}
	return (cw);
}

static size_t	ft_getwdat(const char *s, char c, size_t pos)
{
	size_t	i;
	size_t	k;
	size_t	save;
	int		first;

	i = 0;
	k = 0;
	first = 1;
	save = 0;
	while (s[i] && k < pos + 1)
	{
		if (s[i] != c && first)
		{
			k++;
			first = 0;
			save = i;
		}
		if (s[i] == c)
			first = 1;
		i++;
	}
	return (save);
}

static char	*ft_alloat(const char *s, char c, size_t pos)
{
	size_t	i;
	size_t	k;
	size_t	lenusp;
	char	*p;

	k = ft_getwdat(s, c, pos);
	lenusp = 0;
	while (s[k + lenusp] && s[k + lenusp] != c)
		lenusp++;
	p = malloc((lenusp + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (s[k] && s[k] != c)
	{
		p[i] = s[k];
		i++;
		k++;
	}
	p[i] = '\0';
	return (p);
}

static void	ft_freesplit(char **p, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(p[i]);
		i++;
	}
	free(p);
}

char	**ft_split(char const *s, char c)
{
	size_t	cw;
	size_t	i;
	char	**p;

	if (!s)
		return (NULL);
	i = 0;
	cw = ft_cntwords(s, c);
	p = malloc((cw + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (i < cw)
	{
		p[i] = ft_alloat(s, c, i);
		if (!p[i])
		{
			ft_freesplit(p, i);
			return (NULL);
		}
		i++;
	}
	p[i] = NULL;
	return (p);
}

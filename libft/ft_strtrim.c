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
	while (i < ft_strlen(set))
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_total(char const *s1, char const *set)
{
	size_t	total;
	size_t	i;

	total = 0;
	i = 0;
	while (i < ft_strlen(s1))
	{
		if (!ft_isincharset(set, s1[i]))
			total++;
		i++;
	}
	return (total);
}

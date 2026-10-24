/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 23:57:04 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/24 14:55:16 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_total(int n)
{
	int		total;
	long	nl;

	nl = n;
	if (nl == 0)
		return (1);
	total = 0;
	if (nl < 0)
	{
		total++;
		nl = -nl;
	}
	while (nl)
	{
		total++;
		nl /= 10;
	}
	return (total);
}

static char	*allocate(int n)
{
	char	*p;

	p = malloc((ft_total(n) + 1) * sizeof(char));
	return (p);
}

char	*ft_itoa(int n)
{
	int		total;
	int		target;
	long	nl;
	char	*p;

	p = allocate(n);
	nl = n;
	if (!p)
		return (NULL);
	total = ft_total(n);
	p[total] = '\0';
	target = 0;
	if (nl < 0)
	{
		p[0] = '-';
		nl = -nl;
		target = 1;
	}
	while (total > target)
	{
		p[total - 1] = '0' + (nl % 10);
		nl /= 10;
		total--;
	}
	return (p);
}

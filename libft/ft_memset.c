/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:21:40 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/20 01:10:19 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;
	
	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

typedef struct size_t{
	int x;
	float y;
	char *s;
}	t_t;
#include <stdio.h>
int main()
{
	//-----------> x = -1337;
	//-----------> y = 0;
	//-----------> s = "hello alae";

	//using only memset, and using . operator and malloc is forbidden;
	
	t_t t;
	ft_memset(&t, 0, sizeof(t));
	ft_memset(&t, 42, 1);
	ft_memset((unsigned char *)&t + 4, 42, 1);
	printf("%d\n",t.x);
	printf("%f\n",t.y);
}
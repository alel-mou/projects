/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:12:53 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/27 10:49:34 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isaspace(char c)
{
	return ((9 <= c && c <= 13) || c == ' ');
}

static int	ft_isasign(char c)
{
	return (c == '+' || c == '-');
}

static int	ft_isadigit(char c)
{
	return ('0' <= c && c <= '9');
}

static void	ft_scan(const char *nptr, int *i, int *sign)
{
	*i = 0;
	*sign = 1;
	while (ft_isaspace(nptr[*i]))
		++*i;
	if (ft_isasign(nptr[*i]))
	{
		if (nptr[*i] == '-')
			*sign *= -1;
		++*i;
	}
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	ft_scan(nptr, &i, &sign);
	result = 0;
	while (ft_isadigit(nptr[i]))
	{
		if (result > (9223372036854775807 - (nptr[i] - '0')) / 10)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}

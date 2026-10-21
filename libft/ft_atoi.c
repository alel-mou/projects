/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-mou <alel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:12:53 by alel-mou          #+#    #+#             */
/*   Updated: 2026/10/21 21:45:53 by alel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	return (7 <= c && c <= 13);
}

static int	ft_isasign(char c)
{
	return (c == '+' || c == '-');
}

static int	ft_isdigit(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (ft_isasign(nptr[i]))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		if (result > (9223372036854775807L - (nptr[i] - '0')) / 10)
			return (-1);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if (result > 9223372036854775807L)
		result = 9223372036854775807L;
	return (sign * result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:16:39 by isabri            #+#    #+#             */
/*   Updated: 2021/11/13 16:44:57 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_long(unsigned long long res, int sign)
{
	if (res >= 9223372036854775807)
	{
		if (sign == -1)
			return (0);
	}
	return (-1);
}

int	ft_atoi(const char *str)
{
	unsigned long long	res;
	int					sign;
	char				*p;

	p = (char *)str;
	sign = 1;
	res = 0;
	while (*p == '\n' || *p == '\t' || *p == '\v' || *p == '\f'
		|| *p == '\r' || *p == ' ')
		p++;
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		res = res * 10 + *p - '0';
		p++;
		if (res >= 9223372036854775807)
			return (ft_long(res, sign));
	}
	return ((int)res * sign);
}
/*
int	main()
{
	char	str[] = "-99999999999999999999999";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
}*/

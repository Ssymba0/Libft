/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:14:56 by isabri            #+#    #+#             */
/*   Updated: 2021/11/13 00:00:32 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

static int	lencount(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	n = ft_abs(n);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*itoacases(int n, char *p)
{
	if (n == -2147483648)
		p = ft_strdup("-2147483648");
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;

	len = lencount(n);
	p = 0;
	if (n == -2147483648)
		return (itoacases(n, p));
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	if (n == 0)
		p[0] = '0';
	if (n < 0)
		p[0] = '-';
	n = ft_abs(n);
	p[len--] = '\0';
	while (n > 0)
	{
		p[len--] = n % 10 + 48;
		n /= 10;
	}
	return (p);
}

/*#include <limits.h>
int	main(void)
{
	int	n = 0;
	printf("%s\n", ft_itoa(n));

	char	*p = ft_itoa(n);
	for(int	i = 0; p[i]; i++)
		printf("'%c'", p[i]);
	//printf("'%s'", p[i]);
}*/

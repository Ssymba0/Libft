/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:46:36 by isabri            #+#    #+#             */
/*   Updated: 2021/11/12 20:01:30 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s1;

	s1 = (const char *)s;
	while (n > 0)
	{
		if (*s1 == c)
			return ((void *)s1);
		n--;
		s1++;
	}
	return (0);
}

/*int	main()
{
	int	c = '3';
	char	p[] = "H3llo 3v3ryon3";
	printf("%s\n", ft_memchr(p, c , 10));
	printf("%s", memchr(p, c, 10));
}*/

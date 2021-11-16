/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:35:09 by isabri            #+#    #+#             */
/*   Updated: 2021/11/11 05:25:47 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	char	*p;

	p = (char *)s;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (c == '\0')
		return (p);
	else
		return (0);
}

/*int	main()
{
	const char	s[20]= "Hello World";
	printf("%s\n", strchr(s, '\0'));
	printf("%s\n", ft_strchr(s, '\0'));
}*/

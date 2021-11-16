/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:59:00 by isabri            #+#    #+#             */
/*   Updated: 2021/11/12 17:46:42 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = 0;
	i = ft_strlen((char *)s);
	if (!(s[i]) && c == '\0')
		return ((char *)s + i);
	while (i--)
	{
		if ((char)s[i] == c)
		{
			p = (char *)s + i;
			return (p);
		}
	}
	return (p);
}

/*int	main()
{
	int c = 'W';
	char str[] = "Hellod WWodrld";
	printf("%s\n", ft_strrchr(str,c));
	printf("%s\n", strrchr(str, c));
}*/

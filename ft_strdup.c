/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:44:34 by isabri            #+#    #+#             */
/*   Updated: 2021/11/13 16:43:52 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(ft_strlen((char *)s1) * sizeof(char) + 1);
	if (!p)
		return (0);
	while (*(s1 + i))
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}

/*int	main()
{
	char	str[] = "Hello World";
	printf("%s\n", strdup(str));
	printf("%s\n", ft_strdup(str));
}*/

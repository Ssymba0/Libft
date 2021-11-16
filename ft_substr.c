/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:06:57 by isabri            #+#    #+#             */
/*   Updated: 2021/11/13 18:08:06 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char				*p;
	unsigned int		i;
	unsigned int		j;

	i = 0;
	if (!s)
		return (NULL);
	j = len;
	if (len > ft_strlen(s))
		j = start - ft_strlen(s);
	p = (char *)malloc(j * sizeof(char) + 1);
	if (!p)
		return (0);
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			p[j] = s[i];
			j++;
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}

/*int	main()
{
	char	str[] = "Hello World";

	printf("%s\n", ft_substr(str, 5, 32654));
	system("leaks a.out ");
}*/

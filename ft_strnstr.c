/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:55:05 by isabri            #+#    #+#             */
/*   Updated: 2021/11/15 18:53:24 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[++i] && i < len)
	{
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (!needle[j + 1])
				return ((char *)haystack + i);
			j++;
		}
		j = 0;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
  {
  char	haystack[] = "lorem ipsum dolor sit amet";
  char	needle[] = "ipsumm";
  printf("%s\n", ft_strnstr(haystack, needle, 30));
  printf("%s\n", strnstr(haystack, needle, 30));
  }*/

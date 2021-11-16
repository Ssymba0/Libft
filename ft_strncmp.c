/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:31:45 by isabri            #+#    #+#             */
/*   Updated: 2021/11/12 17:37:03 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	while (((unsigned char)*s1 || (unsigned char)*s2) && n > 0)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*int	main()
{
	char	s1[] = "Healo";
	char	s2[] = "Helko";

	printf("%d\n", ft_strncmp(s1,s2,1));
	printf("%d\n", ft_strncmp(s1,s2,4));
	printf("%d", strncmp(s1,s2,5));
}*/

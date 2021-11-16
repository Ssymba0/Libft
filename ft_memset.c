/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:34:17 by isabri            #+#    #+#             */
/*   Updated: 2021/11/12 21:07:31 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len-- > 0)
		*ptr++ = c;
	return (b);
}

/*int	main()
{
	char str[] = "hello world this is awesome";
	int	n = 10;
	ft_memset(&n, 512, 1);
	//puts(str);
	//ft_memset(n, 2, 1);
	//puts(str);
	printf("%d\n", n);
}*/

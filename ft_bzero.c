/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:51:27 by isabri            #+#    #+#             */
/*   Updated: 2021/11/11 02:48:37 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p = '\0';
		n--;
		p++;
	}
}

/*int	main()
{
	char str[] = "Hello World This Is Awesome";
	bzero(str, 5);
	puts(str);
	ft_bzero(str, 5);
	puts(str);
}*/

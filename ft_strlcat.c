/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:45:35 by isabri            #+#    #+#             */
/*   Updated: 2021/11/16 07:53:32 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	while (dst && dst[i] && i < dstsize)
		i++;
	if (!src)
		return (i);
	while (src && src[j])
		j++;
	if (i >= dstsize || dstsize == 0)
		return (j + dstsize);
	while (src[k] && k < dstsize - i - 1)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + j);
}

// void	ft_print_result(int n)
// {
// 	char c;

// 	if (n >= 10)
// 		ft_print_result(n / 10);
// 	c = n % 10 + '0';
// 	write (1, &c, 1);
// }

// int	main(int argc, const char *argv[])
// {
// 	char	*dest;
// 	int		arg;

// 	dest = (char *)malloc(sizeof(*dest) * 15);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	memset(dest, 'r', 15);
// 		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// }
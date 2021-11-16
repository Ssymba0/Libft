/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:14:40 by isabri            #+#    #+#             */
/*   Updated: 2021/11/11 02:35:23 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, count * size);
	return (p);
}

/*int	main()
{
	char	*p;
	p = (char*)ft_calloc(10,1);
	char	*d;
	d = (char*)calloc(10,1);
	if (p){
		printf("1\n");
		for (int i = 0; i <= 10; i++)
			printf("%s", p[i]);
		printf("\n");}
	else
		printf("0\n");
	if (d){
		printf("1\n");
		for (int	i = 0; i <=10; i++)
			printf("%s", d[i]);
		printf("\n");}
	else
		printf("0\n");
}*/

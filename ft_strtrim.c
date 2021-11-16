/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:59:24 by isabri            #+#    #+#             */
/*   Updated: 2021/11/13 18:08:48 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}

static int	char_in_set(char s, char const *set)
{
	while (*set)
	{
		if (*set == s)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		i;
	int		j;
	int		new;
	char	*p;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1) - 1;
	j = 0;
	new = 0;
	while (j < i && char_in_set(s1[j], set))
		j++;
	while (i >= 0 && char_in_set(s1[i], set))
		i--;
	p = malloc(ft_abs(i - j) * sizeof(char) + 2);
	if (!(p))
		return (NULL);
	while (j <= i)
		p[new++] = s1[j++];
	p[new] = '\0';
	return (p);
}

/*int	main(void)
{
	char	set [] = "i";
	char	s1[] = "iiiiiiii";

	printf("%s\n", ft_strtrim(s1, set));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 08:11:41 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:43:19 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *des, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((unsigned int)n == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < ((unsigned int)n - 1))
	{
		des[i] = src[i];
		i++;
	}
	if (i < (unsigned int)n)
		des[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
int main(void)
{
	char	des[20];
	char	src[20] = "test____TEST____test";
	int	n;

	n = 10;
	printf("\nSRC string: %s", src);
	printf("\nDES string: %s", des);
	printf("\nSize of string:%zu", ft_strlcpy(des, src, n));
	printf("\nDES string after function: %s", des);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:48:49 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:43:30 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i])
		i++;
	while (src[j] && (i + j < n - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}
/*
int	main(void)
{
	char	des[20] = "123456";
	char	src[20] = "ABCDEFGHIJKL";
	int		n;

	n = 8;
	printf("\nDES string: %s", des);
	printf("\nSRC string: %s", src);
	printf("\nSize: %zu", ft_strlcat(des, src, n));
	printf("\nDES after function: \n %s", des);
	return (0);
}*/

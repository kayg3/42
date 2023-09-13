/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 07:44:32 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:43:08 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (((unsigned char *)des) >= ((unsigned char *)src))
	{
		while (i < n)
		{
			((unsigned char *)des)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			((unsigned char *)des)[n] = ((unsigned char *)src)[n];
	}
	return (des);
}
/*
int main(void)
{
	char	src[15] = "Test";
	char	des[10] = "sdffdfsdf";
	int	n;

	n = 4;
	printf("\nSorce: %s", src);
	printf("\nDestinatino: %s", des);
	printf("\nAfter function: %s", (unsigned char *)ft_memmove(des, src, n));
	return (0);
}*/

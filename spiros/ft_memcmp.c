/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:05:53 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:44:46 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	str1[20] = "123456abc";
	unsigned char	str2[20] = "123457abc";
	size_t	i;

	i = 5;
	printf("\nSTR1: %s", str1);
	printf("\nSTR2: %s", str2);
	printf("\n are they same: %d", ft_memcmp(str1, str2, i));
	return (0);
}*/

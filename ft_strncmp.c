/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:14:09 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:44:19 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (0);
	while (*str1 && *str2 && (i < num - 1))
		i++;
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
/*
int	main(void)
{
	const char	str1[40] = "123456789";
	const char	str2[40] = "1234567989";
	size_t	i;

	i = 5;
	printf("\nStr1: %s", str1);
	printf("\nStr2: %s", str2);
	printf("\nDiference: %d", ft_strncmp(str1, str2, i));
	return (0);
}*/

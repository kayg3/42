/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:30:23 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:44:30 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
	str++
	}
	return (0);
}
/*
int	main(void)
{
	const char	str[50] = "123456789abcd";
	const char	c = 'g';
	size_t	i;

	i = 5;
	printf("\nBase STR: %s\nSearching for: %c", str, c);
	printf("\nStr character: %s", (const char *) ft_memchr(str, c, i));
	return (0);
}*/

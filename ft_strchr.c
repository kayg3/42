/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:52:40 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:43:57 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (!c)
		return ((char *)str);
	return (NULL);
}
/*
int main(void)
{
	char	str[20] = "a1b2c3d4e5f6g7h8i";
	int	i;

	i = '7';
	printf("\n SRC string: %s\nSearching for: %d", str, i);
	printf("\n Pointer to location in the string:\n%s", ft_strchr(str, i));
	return (0);
}*/

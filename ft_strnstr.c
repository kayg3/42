/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:45:57 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:45:10 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	if (!little && len == 0)
		return (malloc (0));
	i = 0;
	while (big[i] && i < len)
	{
		k = 0;
		while (((little[k] == big[i + k]) && little[k]
				&& (i + k <= len) && big[i + k]))
			k++;
		if (!little[k])
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*big = "";
	const char	*small= "00000";
	size_t	i;

	i = 50;
	printf("\nSearch in: %s\nSearch for: %s", big, small);
	printf("\nFound from: %s", ft_strnstr(big, small, i));
	return (0);
}*/

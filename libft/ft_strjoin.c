/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:15:33 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:45:56 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*k;
	size_t	i;
	size_t	n;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	k = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*s1));
	if (!k)
		return (NULL);
	while (s1[i])
	{
		k[i] = s1[i];
		i++;
	}
	n = i;
	i = 0;
	while (s2[i])
	{
		k[n + i] = s2[i];
		i++;
	}
	k[n + i] = 0;
	return (k);
}
/*
int	main(void)
{
	const char	*s1 = "123";
	const char	*s2 = "456";

	printf("\n String 1: %s\nString 2: %s", s1, s2);
	printf("\n Joind string: %s", ft_strjoin(s1, s2));
	return (0);
}*/	

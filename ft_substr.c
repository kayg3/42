/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:03:07 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:47:25 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) + start < len)
		len = ft_strlen(s) + start;
	str = (char *)malloc((len + 1) * (sizeof(char)));
	if (!str)
		return (0);
	ft_strlcpy(str, &s[start], (len + 1));
	return (str);
}
/*
int	main(void)
{
	const char	c[4]="hola";
	unsigned int i= 4294967295;
	size_t	l= 0;

	ft_substr (c, i, l);
	return (0);
}*/
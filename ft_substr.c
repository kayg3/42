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
	unsigned int	i;

	i = ft_strlen(s);
	write(0, "1", 1);
	if (!s)
		return (0);
	write(0, "2", 1);
	if (i < start)
		len = 0;
	write(0, "3", 1);
	if (i + start < len)
		len = i + start;
	write(0, "4", 1);
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (!str)
		return (0);
	write(0, "5", 1);
	ft_strlcpy(str, &s[start], len + 1);
	write(0, "6", 1);
	return (str);
}

int	main(void)
{
	const char	c[4]="hola";
	unsigned int i= 4294967295;
	size_t	l= 0;

	printf( "%s", (char *)ft_substr (c, i, 0));
	return (0);
}
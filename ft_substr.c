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
	char	*str;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		(unsigned int) len = 0;
	if ( ft_strlen(s + start) < len)
		(unsigned int) len = ft_strlen(s + start);
	str = (char *) malloc (sizeof(char) * ((unsigned int)(len + 1)));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, (unsigned int)len + 1);
	return (str);
}

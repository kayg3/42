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
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		if (i >= start && k < len)
		{
			str[k] = s[k];
			k++;			
		}
		i++;
	}
	str[k] = 0;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:50:03 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:45:47 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (char *) malloc ((ft_strlen(s) + 1) * sizeof(*s1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] == s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

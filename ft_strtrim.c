/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:31:44 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:46:06 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char s, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	while (s1[start] && (in_set(s1[start], set)))
		start++;
	end = (ft_strlen(s1) - 1);
	while (s1[end] && (in_set(s1[end], set)))
		end--;
	if (start > end)
		return (NULL);
	str = (char *) malloc (sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
/*
int	main(void)
{
	char const	s1[20] = "123a__123__a321";
	char const	trim[20] = "312";

	printf("\n Base string: %s\n Trimmming: %s", s1, trim);
	printf("\n Trmmed string: %s", ft_strtrim(s1, trim));
	return (0);
}*/

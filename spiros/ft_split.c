/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:02:13 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:57:05 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_of_words(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	n;
	size_t	k;
	char	**ptr;

	ptr = ft_calloc((number_of_words(s, c) + 1), sizeof(char *));
	if (!ptr)
		return (NULL);
	k = 0;
	while (*s)
	{
		if (*s != c)
		{
			n = 0;
			while (*s && *s != c)
			{
				s++;
				n++;
			}
			ptr[k++] = ft_substr(((char *)(s - n)), 0, n);
		}
		else
			s++;
	}
	ptr[k] = NULL;
	return (ptr);
}
/*
int	main(void)
{
	char	*s = ""; 
	char	c = 'z';
	char 	**ptr;
	size_t	i;
	int k;

	i = 0;
		ptr = ft_split(s, c);
	free (ptr);
	return (0);
}*/
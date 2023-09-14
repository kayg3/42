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
//#include <stdio.h>
//#include <stdlib.h>

size_t	number_of_words(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
			i++;
			if (*s && *s !=c)
				s++;
		else
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	n;
	size_t	i;
	size_t	k;
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc (sizeof(char *) * (number_of_words(s, c) + 1));
	if (!ptr)
		return (NULL);

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			n = 0;
			while (s[i] && s[i] != c)
			{
				i++;
				n++;
			}
			ptr[k++] = ft_substr(&s[i-n], 0, n);	
		}
		else 
			i++;
	}
	ptr[n] = 0;
	return (ptr);
}
/*
int	main(void)
{
	char	*s = "__5sdfds_1_4assda_123_45___da"; 
	char	c = '_';
	char 	**ptr;
	size_t	i;
	int k;

	i = 0;
	printf("\nString to split: %s\nTriming element: %c", s, c);  
	printf("\nNumber of words:   %zu", number_of_words(s, c));
	ptr = ft_split(s, c);
	while (i <= number_of_words(s, c))
	{
		printf("\nSplit %zu:", i);
		k = 0;
		while (ptr[i][k])
			printf("%c", ptr[i][k++]);
		i++;
	}
	return (0);
}*/
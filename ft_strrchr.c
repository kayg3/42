/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:56:56 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:44:10 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (str[i])
	{
		if (str[i] == c)
			ptr = (char *)(str + i);
		i++;
	}
	if (str[i] == c)
		ptr = (char *)(str + i);
	return (ptr);
}
/*
int	main(void)
{
	char	str[20] = "1ah2b3c4d5e6f7g8h9";
	int	i;

	i = 'h';
	printf("\nSRC string: %s\nSearching for: %c", str, (char) i);
	printf("\nString after we found last same symbol:\n%s", ft_strrchr(str, i));
	return (0);
}*/

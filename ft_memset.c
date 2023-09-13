/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:35:57 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:42:25 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[50];

	strcpy(str, "Test______TEST______TETE____STERSD_ER_TE_RT_ER");
	printf("\nBase string:%s", str);
	printf("\nCopy       :%s\n", ((unsigned char *)(ft_memset(str, '5', 10))));
	return (0);
}*/

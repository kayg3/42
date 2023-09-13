/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 07:12:05 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:42:53 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	void	*str;

	if (!des || !src)
		return (0);
	str = des;
	while (n--)
		*(char *)des++ = *(char *)src++;
	return (str);
}
/*
int main(void)
{
	char so[15];
	char des[15];
	int	n;

	memcpy(so, "_____", 6);
	memcpy(des, "TESTO12345TESTO", 15);
	n = 8;
	printf("\nSource: %s", so);
	printf("\nDestionation: %s", des);
	printf("\nAfter: %s",(unsigned char *) ft_memcpy(des, so, n));
	return (0);
}*/

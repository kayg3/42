/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:32:32 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 07:42:55 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_of_str(int i)
{
	int	n;

	n = 0;
	if (i == 0)
		return (1);
	if (i < 0)
		n++;
	while (i)
	{
		if (i > 0)
			i/= 10;
		else
			i /= - 10;
		n++;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*str;
	
	l = size_of_str(n);
		str = malloc (sizeof(char) * (l + 1));
	if (!str)
		return (0);
	str[l] = 0;
	if (n == 0)
		str[0] = 48;
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--l] = n % 10 + 48;
		else
			str[--l] = n % 10 * -1 + 48;
		n /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	int	i = -2147483648;
	
	printf("\nBASE NUMBER     : %d", i);
	printf("\nSPACES TO CREATE: %d", size_of_str(i));
	printf("\nCharacter nubmer: %s", ft_itoa(i));
	return (0);
}*/

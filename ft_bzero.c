/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:19:53 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:42:42 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return (0);
}
/*
int main(void)
{
	char	str[100];

	strcpy(str, "Test_____TESTE___TESTREsdf_ASDFASDFASDFAD__ASDF");
	ft_bzero(str, 5);
	return (0);
}*/	

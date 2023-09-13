/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:53:32 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 06:40:17 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}
/*
int	main(void)
{
	char	*c = "12345";

	ft_putstr_fd(c, 2);
	return (0);
}*/

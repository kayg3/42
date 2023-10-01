/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkozmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:51:53 by jkozmus           #+#    #+#             */
/*   Updated: 2023/09/13 08:15:33 by jkozmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10 * i, fd);
	ft_putchar_fd((n % 10 * i + 48), fd);
}
/*
int	main(void)
{
	int	i = -2147483648;
	int fd = 2;

	printf("\nBASE NUMBER: %d\n", i);
	ft_putnbr_fd(i, fd);
	return (0);
}*/

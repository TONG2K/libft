/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:40:01 by jikarunw          #+#    #+#             */
/*   Updated: 2023/09/03 15:42:24 by jikarunw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	rev;
	int	digit;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	rev = 0;
	while (n > 0)
	{
		digit = n % 10;
		rev = rev * 10 + digit;
		n /= 10;
	}
	while (rev > 0)
	{
		digit = rev % 10 + '0';
		ft_putchar_fd(digit, fd);
		rev /= 10;
	}
}

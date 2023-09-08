/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:20:35 by jikarunw          #+#    #+#             */
/*   Updated: 2023/09/08 13:04:18 by jikarunw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg_digit;
	int	res;
	int	i;

	res = 0;
	neg_digit = 1;
	i = 0;
	if (!str)
		return (0);
	while ((str[i] >= '9' && str[i] <= '13') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg_digit = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res = res * 10 + (str[i++] - '0');
	}
	return (res * neg_digit);
}

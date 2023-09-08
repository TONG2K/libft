/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:20:35 by jikarunw          #+#    #+#             */
/*   Updated: 2023/09/06 14:30:46 by jikarunw         ###   ########.fr       */
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
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\b' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg_digit = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > INT_MAX / 10 || (res == INT_MAX 
				/ 10 && (str[i] - '0') > INT_MAX % 10))
		{
			if (neg_digit == -1)
				return INT_MIN; // Overflow, return INT_MIN
			else
				return INT_MAX; // Overflow, return INT_MAX
		}
		res = res * 10 + (str[i++] - '0');
	}
	return (res * neg_digit);
}

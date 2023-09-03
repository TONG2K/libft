/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 23:31:48 by jikarunw          #+#    #+#             */
/*   Updated: 2023/09/04 02:08:12 by jikarunw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_nb_digit(long n_l, int sign)
{
	unsigned int	nb_digit;

	if (n_l == 0)
		return (1);
	nb_digit = 0;
	while (n_l > 0) 
	{
		n_l /= 10;
		nb_digit++;
	}
	if (sign == -1)
		nb_digit++;
	return (nb_digit);
}

char	*ft_itoa(int n)
{
	unsigned int	nb_digit;
	long			n_l;
	int				sign;
	char			*outstr;

	n_l = (long)n;
	sign = 1;
	if (n_l < 0) 
	{
		n_l = -n_l;
		sign = -1;
	}
	nb_digit = get_nb_digit(n_l, sign);
	outstr = (char *)malloc(sizeof(char) * (nb_digit + 1));
	if (!outstr) 
		return (NULL);
	outstr[nb_digit--] = '\0';
	while (n_l != 0) 
	{
		outstr[nb_digit--] = n_l % 10 + '0';
		n_l /= 10;
	}
	if (sign == -1)
		outstr[0] = '-';
	return (outstr);
}

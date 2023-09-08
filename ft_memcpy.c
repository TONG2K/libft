/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:48:52 by jikarunw          #+#    #+#             */
/*   Updated: 2023/09/06 13:07:36 by jikarunw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_char;
	const unsigned char	*src_char;

	if (!dst || !src)
		return (NULL);
	dst_char = dst;
	src_char = src;
	while (n-- > 0)
		*dst_char++ = *src_char++;
	return (dst);
}

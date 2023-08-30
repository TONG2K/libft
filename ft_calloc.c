/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:31:24 by jikarunw          #+#    #+#             */
/*   Updated: 2023/08/30 19:39:35 by jikarunw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	i;

	dst = malloc(count * size);
	if (!(dst))
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *) dst);
}

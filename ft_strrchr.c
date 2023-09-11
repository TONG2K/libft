/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:22:07 by jikarunw          #+#    #+#             */
/*   Updated: 2023/09/11 02:33:34 by jikarunw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			ptr = ((char *)s);
		s++;
	}
	return (ptr);
}

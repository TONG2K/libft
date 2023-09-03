/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:24:08 by jikarunw          #+#    #+#             */
/*   Updated: 2023/09/04 01:34:57 by jikarunw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_strndup(const char *str, size_t n)
{
	char *dup = (char *)malloc((n + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	for (size_t i = 0; i < n; i++)
		dup[i] = str[i];
	dup[n] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	size_t num_words = 0, i = 0, start = 0;
	if (!s)
		return (NULL);
    while (s[i])
    {
		while (s[i] == c)
			i++;
		if (s[i] && ++num_words)
			while (s[i] && s[i] != c)
				i++;
	}
    char **result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!result)
		return NULL;
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			size_t end = start;
			while (s[end] && s[end] != c)
				end++;
			result[i] = ft_strndup(s + start, end - start);
			if (!result[i++])
			{
				while (i > 0)
					free(result[--i]);
				free(result);
				return NULL;
			}
			start = end;
		}
	}
	result[num_words] = NULL;
	return result;
}

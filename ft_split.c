/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikarunw <jikarunw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:24:08 by jikarunw          #+#    #+#             */
/*   Updated: 2023/09/05 22:15:29 by jikarunw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_div(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	if (s[0] && s[0] != c)
		count++;
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			count++;
		i++;
	}
	return (count);
}

static char	*ft_extract_segment(char const *s, char c, int i)
{
	int		j;
	int		k;
	char	*result;

	j = i;
	while (s[i] && s[i] != c)
		i++;
	result = (char *)malloc(sizeof(char) * ((i - j) + 1));
	if (!result)
		return (NULL);
	k = 0;
	while (j != i)
	{
		result[k] = s[j];
		k++;
		j++;
	}
	result[k] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_count_div(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (i <= (int)ft_strlen(s) && ft_count_div(s, c))
	{
		if (ft_strlen(ft_extract_segment(s, c, i)))
		{
			str[j] = ft_extract_segment(s, c, i);
			i += (ft_strlen(str[j]) + 1);
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}

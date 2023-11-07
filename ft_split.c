/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekhzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 02:18:52 by tmekhzou          #+#    #+#             */
/*   Updated: 2023/11/07 03:34:03 by tmekhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	i;
	size_t	j;

	j = 0;
	dest = malloc(sizeof (char *) * ((count_words(s, c)) + 1));
	if (!dest)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			i = 0;
			while (*(s + i) != c && *(s + i) != '\0')
				i++;
			dest[j] = ft_substr(s, 0, i);
			j++;
			s = s + i;
		}
		else
			s++;
	}
	dest[j] = 0;
	return (dest);
}

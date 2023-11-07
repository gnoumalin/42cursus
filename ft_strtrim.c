/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekhzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:54:13 by tmekhzou          #+#    #+#             */
/*   Updated: 2023/11/07 03:54:14 by tmekhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) != NULL && s1[start])
		start++;
	while (ft_strchr(set, s1[end]) != NULL && end > start)
		end--;
	if (start > end)
		return (ft_strdup(""));
	dest = ft_substr(s1, start, end - start + 1);
	return (dest);
}

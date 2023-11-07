/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekhzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:43:56 by tmekhzou          #+#    #+#             */
/*   Updated: 2023/11/07 17:57:36 by tmekhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	len_to_find;
	size_t	len_str;

	if (*to_find == '\0')
		return ((char *)str);
	if (!len)
		return (0);
	len_to_find = ft_strlen((char *)to_find);
	len_str = ft_strlen((char *)str);
	if (len_to_find > len_str)
		return (NULL);
	while (*str != '\0' && len >= len_to_find)
	{
		if (ft_memcmp(str, to_find, len_to_find) == 0)
			return ((char *) str);
		str++;
		len--;
	}
	return (NULL);
}

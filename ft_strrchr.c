/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekhzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:38:46 by tmekhzou          #+#    #+#             */
/*   Updated: 2023/11/07 03:42:01 by tmekhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*save;

	save = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			save = (char *)(s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (save);
}

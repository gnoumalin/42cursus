/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekhzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:58:42 by tmekhzou          #+#    #+#             */
/*   Updated: 2023/11/07 01:59:08 by tmekhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*check;
	size_t	total;

	if (size == 0 || nmemb == 0)
		return (NULL);
	total = size * nmemb;
	check = (void *)malloc(total);
	if (!check)
		return (NULL);
	ft_bzero(check, total);
	return (check);
}

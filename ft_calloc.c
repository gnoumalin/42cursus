/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekhzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:58:42 by tmekhzou          #+#    #+#             */
/*   Updated: 2023/11/07 17:55:13 by tmekhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*check;
	size_t		total;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb < 0 || size < 0)
		return (0);
	total = size * nmemb;
	if ((65535 / nmemb) >= size)
	{
		total = size * nmemb;
		check = (void *)malloc(total);
		if (!check)
			return (NULL);
		ft_bzero(check, total);
		return (check);
	}
	else
		return (NULL);
}

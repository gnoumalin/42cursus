/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekhzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 02:03:29 by tmekhzou          #+#    #+#             */
/*   Updated: 2023/11/08 11:17:26 by tmekhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_rev(char *dest, int n)
{
	int		i;
	char	save;

	i = 0;
	while (i < ft_len(n) / 2)
	{
		save = dest[i];
		dest[i] = dest[ft_len(n) - 1 - i];
		dest[ft_len(n) - 1 - i] = save;
		i++;
	}
	dest[ft_len(n)] = '\0';
	return (dest);
}

char	*allocate(char *dest, int n)
{
	int		len;
	
	len = ft_len(n);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	return (dest);
}

char	*fill_tab(char *dest, int n)
{
	int		i;
	int		neg;

	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	i = 0;
	while (n >= 1)
	{
		dest[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg == 1)
		dest[i++] = '-';
	return dest;
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return(ft_strdup("0"));
	i = 0;
	if (n < 0)
	{
		n = n * -1;
		neg = 1;
	}
	if (!(allocate(dest, n)))
		return (NULL);
	ft_rev(dest, n);
	return (dest);
}

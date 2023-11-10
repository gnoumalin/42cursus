#include "libft.h"

int	ft_len(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_rev(char *dest, int len)
{
	int		i;
	char	save;

	i = 0;
	while (i < len / 2)
	{
		save = dest[i];
		dest[i] = dest[len - 1 - i];
		dest[len - 1 - i] = save;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

#include <stdio.h>
char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	int		len;
	int		neg;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return(ft_strdup("0"));
	i = 0;
	len = ft_len(n);
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return(NULL);
	while (n >= 1)
	{
		dest[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (neg)
	{	
		dest[i] = '-';
		i++;
	}	
	ft_rev(dest, i);
	return (dest);
}


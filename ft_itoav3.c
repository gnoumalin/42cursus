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

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	int		len;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return(ft_strdup("0"));
	i = 0;
	len = ft_len(n);
	if (n < 0)
	{
		n = n * -1;
		neg = 1;
	}
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n == 0)
	{	
		*dest = '0';
		return (dest);
	}
	while (n >= 1)
	{
		dest[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg)
		dest[i++] = '-';
	ft_rev(dest, len);
	return (dest);
}

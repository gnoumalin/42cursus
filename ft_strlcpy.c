#include <libft.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (dest == NULL || src == NULL)
		return (0);
	while (src[len] != '\0')
		len++;
	if (size > 0)	
	{	
		while (src[i] != '\0' && i + 1 < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

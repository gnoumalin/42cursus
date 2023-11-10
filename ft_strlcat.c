#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	return_value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		return_value = ft_strlen(src) + size;
	else
		return_value = ft_strlen(src) + ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (return_value);
}

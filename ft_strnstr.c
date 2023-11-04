#include <libft.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	len_to_find;
	size_t	len_str;

	if (*to_find == '\0')
		return ((char *)str);
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


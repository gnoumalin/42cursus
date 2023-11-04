#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*dest;
	int	i;
	int	j;

	i = 0;
	j = 0;
	total = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * total + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{	
		dest[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		dest[j] = s2[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

#include <libft.h>

size_t	count_words(char const *s, char c)
{
	size_t	count;
	int	i;

	count = 0;
	i = 0;
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}


char	**ft_split(char const *s, char c)
{
	size_t	nb_words;
	char	**dest;
	size_t	i;
	size_t	j;
	
	j = 0;
	nb_words = count_words(s, c);
	dest = malloc(sizeof (char *) * (nb_words + 1));
	if (!dest)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			i = 0;
			while (*(s + i) != c && *(s + i) != '\0')
				i++;
			dest[j] = ft_substr(s, 0, i);
			j++;
			s = s + i;
		}
		else
			s++;
	}
	dest[j] = 0;
	return (dest);
}

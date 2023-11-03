#include <stdio.h>
#include <stdlib.h>
char    *ft_substr(char const *s, unsigned int start, size_t len);
size_t  count_words(char const *s, char c);
char    **ft_split(char const *s, char c);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char            *dest;
        unsigned int    i;

        i = 0;
        if (!s)
                return (NULL);
        dest = malloc((len + 1) * sizeof(char));
        if (!dest)
                return (NULL);
        while (s[i + start] && i < len)
        {
                dest[i] = s[start + i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}


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
		if (s[i] == c && s[i++] != c)
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
		if (*s == c)
			s++;
		else
		{
			i = 0;
			while (*(s + i) != c && *(s + i) != '\0')
				i++;
			dest[j] = ft_substr(s, 0, i);
			j++;
			s = s + i;
		}
	}
	dest[j] = 0;
	return (dest);
}

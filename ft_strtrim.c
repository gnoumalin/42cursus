
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	size_t	start;
	size_t	end;
	char	*dest;

	end = strlen(s1);	
	while (ft_strchr(set, s1[start]) != 0 && s1[start])
		start++;
	while (ft_strchr(set, s1[end]) != 0 && end != 0)
		end--;
	dest = malloc(sizeof(char) * (end + 1 - start));
	if (!dest)
		return (NULL);
	i = 0;
	while (start <= end)
	{	
		dest[i] = s1[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dest;
	unsigned int 	i;
	
	i = 0;
	if (s[start] == '\0')
		return(NULL);
	dest = malloc((len + 1) * sizeof(char));
	if (!dest || !s)
		return (NULL);
	while (s[i + start] && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s);
		i++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*save;
	
	save = 0;
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == (char)c)
			save = ((char *)(s + i));
		i++;
	}
	return (save);
}

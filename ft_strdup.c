
char	*ft_strdup(const char *s)
{
	char	*check;
	char	*dest;
	int	i;
	size_t	len_s;

	i = 0;
	len_s = strlen(s) + 1;
	check = (dest = malloc(len_s * sizeof(char)));
	if (!check)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

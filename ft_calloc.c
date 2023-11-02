void	*calloc(size_t nmemb, size_t size)
{
	void	*check;
	size_t	total;

	total = size * nmemb;
	check = (void *)malloc(total);
	if (!check)
		return (NULL);
	ft_bzero(check, total);
	return (check);
}

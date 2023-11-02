void	*memcpy(void *restrict dest, const void *restrict src, site_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	while(i < n)
	{
		((char *)dest[i]) = ((char *)src[i]);
		i++;
	}
	return (dest);
}

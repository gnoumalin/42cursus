void	*memcpy(void *restrict dest, const void *restrict src, site_t n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

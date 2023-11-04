#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*check;
	size_t	total;
	
	if (size == 0 || nmemb == 0)
		return (NULL);
	total = size * nmemb;
	check = (void *)malloc(total);
	if (!check)
		return (NULL);
	ft_bzero(check, total);
	return (check);
}

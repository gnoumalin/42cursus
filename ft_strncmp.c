#include <stddef.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 == *s2)
	{	
		n--;
		s1++;
		s2++;
	}
	if(n == 0)
		return (0);
	return (*s1 - *s2);
}

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	unit;

	if (n == -2147483648)
	{	
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{	
		n = -n;
		write(fd, "-", 1);
	}
	unit = n % 10 + '0';
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	write(fd, &unit, 1);
}

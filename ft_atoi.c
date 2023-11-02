int	ft_atoi(const char *nptr)
{
	int		sign;
	long int	nb;
	
	sign = 1;
	nb = 0;
	while(*nptr >= 9 && *nptr <= 13 || *nptr == 32)
		nptr++;
	if (*nptr == '-')
	{	
		sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nb = nb * 10 + (*nptr - '0');
		nptr++;
	}
	return (nb * sign);
}
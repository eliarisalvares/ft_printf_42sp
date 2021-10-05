int	ft_atoi(const char *str)
{
	int	res;
	int	sig;

	sig = 1;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r'
		|| *str == '\f' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sig = -sig;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	return (res * sig);
}

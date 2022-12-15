
int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	neg = 1;
	num = 0;

	while (str[i] <= 32)
		i++;

	if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}

	else if (str[i] == '+')
		i++;

	while (str[i] >= '0' && str[i] <= '9' && str[i] != '-')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return(num * neg);
}

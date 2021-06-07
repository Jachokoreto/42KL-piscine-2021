//from char * to int with the base
int	ft_atoi(char str[i])
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	while (((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ') && str[i])
		i++;
	sign = 1;
	while ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	number = 0;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		number = 10 * number + (str[i] - '0');
		i++;
	}
	return (number * sign);
}

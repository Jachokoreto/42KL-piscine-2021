int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 1)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

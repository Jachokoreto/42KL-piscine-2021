int	is_prime(unsigned int nb, unsigned int i)
{
	if (nb % i == 0)
		return (0);
	if (i * i > nb && i)
		return (1);
	else
		return (is_prime(nb, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb <= 2)
	{
		if (nb == 2)
			return (1);
		else
			return (0);
	}
	return (is_prime(nb, 2));
}

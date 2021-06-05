int	ft_sqrt(int nb)
{
	unsigned int	sq;

	if (nb < 1)
		return (0);
	sq = 0;
	while (sq * sq < (unsigned int)nb)
		sq++;
	if (sq * sq == (unsigned int)nb)
		return (sq);
	else
		return (0);
}

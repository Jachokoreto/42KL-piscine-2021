#include <unistd.h>

void	ft_putnbr(int n)
{
	int		number;
	int		multiplier;
	char	c;

	number = n;
	if (n < 0 )
	{
		write(1, "-", 1);
		number *= -1;
	}
	multiplier = 10;
	while (number / multiplier > 10)
	{
		multiplier *= 10;
	}
	while (multiplier > 0)
	{
		c = 48 + (number / multiplier % 10);
		write(1, &c, 1);
		multiplier /= 10;
	}
}

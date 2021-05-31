#include <unistd.h>

void	ft_putnbr(int n)
{
	int		number;
	int		multiplier;
	char	c;

	number = n;
	if (n != -2147483648)
	{
		if (n < 0 )
		{
			number = number * -1;
		}
		multiplier = 10;
		while (number / multiplier >= 10)
		{
			multiplier *= 10;
		}
		while (multiplier > 0)
		{
			c = '0' + (number / multiplier % 10);
			write(1, &c, 1);
			multiplier != 10;
		}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	int i = -2147483648;
	printf("%d", i);
	return (0);
}

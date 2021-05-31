#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
	int		number;
	int		multiplier;
	char	c;

	number = n;
	if (n < 0 )
	{
		//write(1, "-", 1);
		number = number / 10 * -1; //!!!!!!
	}
	printf("%d", number);
	multiplier = 10;
	while (number / multiplier >= 10)
	{
		multiplier *= 10;
	}
	while (multiplier > 0)
	{
		c = 48 + (number / multiplier % 10);
		//write(1, &c, 1);
		multiplier /= 10;
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	int i = -2147483648;
	printf("%d", i);
	return (0);
}

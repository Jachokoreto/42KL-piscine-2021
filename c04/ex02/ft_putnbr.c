#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	nbr_unsigned;

	if (nbr < 0)
	{
		nbr_unsigned = (unsigned int)(-1 * nbr);
		ft_putchar('-');
	}
	else
		nbr_unsigned = (unsigned int)nbr;
	if (nbr_unsigned >= 10)
	{
		ft_putnbr(nbr_unsigned / 10);
		ft_putnbr(nbr_unsigned % 10);
	}
	else
		ft_putchar(nbr_unsigned + '0');
}

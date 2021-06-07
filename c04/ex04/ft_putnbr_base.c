#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_base(char *base)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 0;
		count = 0;
		while (base[j] != '\0')
			if (base[j++] == base[i])
				count++;
		if (count > 1)
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_unsigned;
	int				base_n;

	base_n = get_base(base);
	if (base_n <= 1)
		return ;
	if (nbr < 0)
	{
		nbr_unsigned = (unsigned int)(-1 * nbr);
		ft_putchar('-');
	}
	else
		nbr_unsigned = (unsigned int)nbr;
	if (nbr_unsigned >= (unsigned int)base_n)
	{
		ft_putnbr_base(nbr_unsigned / base_n, base);
		ft_putnbr_base(nbr_unsigned % base_n, base);
	}
	else
		ft_putchar(base[nbr_unsigned]);
}

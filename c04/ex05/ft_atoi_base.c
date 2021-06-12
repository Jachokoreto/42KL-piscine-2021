#include <unistd.h>

int	get_base(char *base);

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	nbr;
	int				base_n;
	int				i;
	int				j;

	base_n = get_base(base);
	if (base <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (base[j] && str[i] != base[j])
			j++;
		if (str[i] == base [j])
			nbr = nbr * 10 + j;
		else
			return (0);
	}
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

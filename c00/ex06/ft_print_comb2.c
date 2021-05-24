#include <unistd.h>

void	ft_print_comb(char left1, char left2, char right1, char right2);

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 < '9')
		{
			n3 = n1;
			n4 = n2 + 1;
			ft_print_comb(n1, n2, n3, n4);
			n2++;
		}
		n1++;
	}
}

void	ft_print_comb(char left1, char left2, char right1, char right2)
{
	char	n1;
	char	n2;

	n1 = right1;
	n2 = right2;
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			write(1, &left1, 1);
			write(1, &left2, 1);
			write(1, " ", 1);
			write(1, &n1, 1);
			write(1, &n2, 1);
			write(1, ", ", 2);
			n2++;
		}
		n2 = '0';
		n1++;
	}
}

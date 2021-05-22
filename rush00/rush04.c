#include <unistd.h>

void	ft_putchar(char c);

void	rush(int t_x, int t_y)
{
	int	c_y;
	int	c_x;

	c_y = 1;
	c_x = 1;
	while (c_y <= t_y)
	{
		while (c_x <= t_x)
		{
			if ((c_y == 1 && c_x == 1) || (c_y == t_y && c_x == t_x))
				ft_putchar('A');
			else if ((c_y == 1 && c_x == t_x) || (c_y == t_y && c_x == 1))
				ft_putchar('C');
			else if ((c_y != 1 && c_y != t_y) && (c_x != 1 && c_x != t_x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			c_x++;
		}
		ft_putchar('\n');
		c_y++;
		c_x = 1;
	}
}

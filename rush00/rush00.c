#include <unistd.h>

void	ft_putchar(char c);

void	rush(int col, int row)
{
	int	c_row;
	int	c_col;

	c_row = 1;
	c_col = 1;
	while (c_row <= row)
	{
		while (c_col <= row)
		{
			check_if_corner()
			else if ((c_row > 1 && c_row < row) && (c_col == 1 || c_col == row))
				ft_putchar('|');
			else if ((c_row == 1 || c_row == row) && (c_col >= 1 || c_col <= row))
				ft_putchar('-');
			else
				ft_putchar(' ');
			c_col++;
		}
		ft_putchar('\n');
		c_row++;
		c_col = 1;
	}
}

void	check_if_corner(int col_c, int col, int row_c, int row)
{
	if ((col_c == 1 || col_c == col) && (row_c == 1 || row_c == row))
		ft_putchar('o');
}

void	check_if_left_right_border(int col_c, int col, int row_c, int row)
{
	if ((row_c != 1 && row_c <= row) && (col_c == 1 || c_col == row))
		ft_putchar('|');
}

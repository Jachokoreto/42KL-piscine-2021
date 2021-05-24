#include <unistd.h>
#include <stdio.h>

void	reinitialize(int max, int pos, char arr[]);
void	ft_write_digit(int n, char digit[]);

void	ft_print_combn(int n)
{
	char	digit[10];
	int		i;
	int		pos;

	if (n < 0 || n > 10)
		return ;
	digit[0] = '0';
	reinitialize(n, 1, digit);
	pos = n - 2;
	while (digit[0] < (10 - n) + '0')
	{
		while (digit[pos] <= (10 - (n - pos) + '0'))
		{
			while (digit[n - 1] <= '9')
			{
				ft_write_digit(n, digit);
			}
			digit[pos]++;
			reinitialize(n, pos + 1, digit);
		}
		pos--;
	}
}

void	reinitialize(int max, int pos, char arr[])
{
	while (pos < max)
	{
		if (pos != 0)
			arr[pos] = arr[pos - 1] + 1;
		pos++;
	}
}

void	ft_write_digit(int n, char digit[])
{
	int	i;

	i = 0;
	while (i++ <= n)
		write(1, &digit[i - 1], 1);
	digit[n - 1]++;
	if (digit[0] != (10 - n) + '0')
		write(1, ", ", 2);
}

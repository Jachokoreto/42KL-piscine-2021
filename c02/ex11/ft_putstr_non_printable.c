#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	 int	i;
	 char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < ' ' || c == 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[c / 16]);
			ft_putchar("0123456789abcdef"[c % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

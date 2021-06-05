#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	write(1, str, length);
}

int	main(int argc, char **argv)
{
	if (argc != 1)
		return (0);
	ft_putstr(argv[0]);
	return (0);
}

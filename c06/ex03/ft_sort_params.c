#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	write(1, str, length);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	sort_argv(int argc, char **argv)
{
	int		counter;
	int		i;

	i = 0;
	counter = 1;
	while (i < argc - 1 && counter != 0)
	{
		counter = 0;
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap_str(&argv[i], &argv[i + 1]);
			counter++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	sort_argv(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}

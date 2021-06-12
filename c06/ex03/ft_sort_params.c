#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap_str(char **s1, char **s2);
void	selection_sort(int size, char **str);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	selection_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 2);
		i++;
	}
	return (0);
}

void	selection_sort(int size, char **str)
{
	int		max;
	int		i;
	int		j;

	i = 1;
	while (i < size - 1)
	{
		j = 1;
		max = 1;
		while (j < size - i)
		{
			if (ft_strcmp(str[j], str[max]) > 0)
				max = j;
			j++;
		}
		ft_swap_str(&str[max], &str[size - i]);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	write(1, str, length);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

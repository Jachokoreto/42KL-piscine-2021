#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		min = i;
		while (j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		ft_swap(&tab[min], &tab[i]);
		i++;
	}
}

int main(void)
{
	int tab[] = {4,2,3,1,9,2};

	ft_sort_int_tab(tab, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("%d",tab[i]);
	}
	return (0);
}

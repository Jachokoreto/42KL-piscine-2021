#include <stdio.h>

int	check_xy(int input, int x, int y, int array[][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (input == array[x][i])
			return (0);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		if (input == array[i][y])
			return (0);
		i++;
	}
	return (1);
}

/* 4. Logic Calc (topic)
4.1. Hard coded check for 3 logic -Eddie
4.2. Tough & stupid logic : smart
4.3. Cross check logic function x axis y axis & eliminate -Jac
4.4. Check pointer vs permutation array -Jac */

void	check_combo(int input[], int combo[][5])
{
	int	*x;
	int	*y;
	int	*pos[4];

	x = malloc(sizeof(int));
	*x = 0;
	y = malloc(sizeof(int));
	*y = 0;

	int i;
	i = 0;
	while (i < 4)
	{
		pos[i] = (int *)mallac(4 * sizeof(int));
		i++;
	}

	if (x == NULL || y == NULL || pos[0] == NULL)
		return (1);
	while (y < 4)
	{
		while ()
	}
}

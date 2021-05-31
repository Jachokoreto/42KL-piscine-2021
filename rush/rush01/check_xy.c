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

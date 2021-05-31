#include <stdio.h>
/* 4. Logic Calc (topic)
4.1. Hard coded check for 3 logic -Eddie
4.2. Tough & stupid logic : smart
4.3. Cross check logic function x axis y axis & eliminate -Jac
4.4. Check pointer vs permutation array -Jac
Unfinshed work......*/


int	valid_combo(int	*chk_cmbo, int combo[][4], int pointer[], int i);
void	assign_answer(int *combo[], int x, int y, int ans[][4]);


void	try_combo(int pointer[], int combo[][5])
{
	int	x;
	int	y;
	int	ans[4][4];

	while (y < 4)
	{
		while (x < 4)
		{
			//quit if box is empty
			if (ans[y][x++] == 0)
				continue;

			int i = 0;
			while (i < 12)
			{	//find the combo that match current horizontal pointer
				if (combo[i][0] == ((pointer[8 + y] * 10) + (pointer[12 + y])))
				{
					if (valid_combo(combo[i], combo, pointer) == 1)
						assign_answer(combo[i], 0, y);
				}
				i++;
			}
		}
	}
}
//check combo with vertical pointer
int	valid_combo(int	*chk_cmbo, int combo[][], int pointer[], int y)
{
	int ptr = pointer[0 + i] * 10 + pointer[4 + i];
	int j = 0;

	while (j < 12)
	{
		if (combo[j][0] == ptr)
		{
			int k = 1;
			if (*chk_cmbo[k] != combo[j][k])
				break;
			k++;
		}
		j++;
	}
	return(0);
}

void	assign_answer(int *combo[], int x, int y, int ans[][])
{
	while (x < 4)
	{
		if (ans[x][y] != 0)
		{
			x++;
			continue;
		}
		ans[x][y] = *combo[x];
		x++;
	}
}

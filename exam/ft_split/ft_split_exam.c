#include <stdlib.h>
#include <stdio.h>

char	*add_word(char *str, int *i);

char	**ft_split(char *str)
{
	char	**array;
	int		i;
	int		count;
	int		j;
	int		*ptr;

	i = 0;
	count = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		count++;
		while ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
			i++;
	}
	array = (char **)malloc (sizeof(*array) * (count + 1));
	if (array == NULL)
		return (NULL);
	j = 0;
	i = 0;
	ptr = &i;
	while (j < count)
	{
		array[j] = add_word(str, ptr);
		j++;
	}
	return (array);
}

char	*add_word(char *str, int *i)
{
	int		idx1;
	int		idx2;
	int		j;
	char	*tmp;

	while ((str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n') && str[*i])
		*i = *i + 1;
	idx1 = *i;
	while ((str[*i] != ' ' && str[*i] != '\t' && str[*i] != '\n') && str[*i])
		*i = *i + 1;
	idx2 = *i;
	tmp = (char *)malloc (sizeof(*tmp) * (idx2 - idx1 + 1));
	if (tmp == NULL)
		return (NULL);
	j = 0;
	while ((idx1 + j) < idx2)
	{
		tmp[j] = str[idx1 + j];
		printf("%c", str[idx1 + j]);
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}

int	main(void)
{
	int i = 0;
	char **array;
	array =	ft_split("hello jello pello hwllo sello tello yello    4   wer   ieieie");
	printf("\nPrinting array...\n");
	while (i < 10)
	{
		printf("%d:(%s)\n", i, array[i]);
		i++;
	}
	free(array);
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int		is_sep(char c, char *sep);
int		count_words(char *str, char *sep);
char	*save_word(char *str, int idx1, int idx2);

char	**ft_split(char *str, char *sep)
{
	char	**word_box;
	int		n_words;
	int		i;
	int		x;
	int		y;

	n_words = count_words(str, sep);
	printf("%d\n", n_words);
	word_box = (char **) malloc (sizeof(char) * (100 + 1));
	printf("%ld\n", sizeof(*word_box));
	if (!word_box)
		return (NULL);
	i = 0;
	y = 0;
	while (i < n_words)
	{
		while (is_sep(str[y], sep))
			y++;
		x = y;
		while (!(is_sep(str[y], sep)))
			y++;
		word_box[i++] = save_word(str, x, y++);
	}
	word_box[i] = 0;
	return (word_box);
}

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_sep(str[i], sep)))
		{
			count++;
			while (!(is_sep(str[i], sep)))
				i++;
		}
		i++;
	}
	return (count);
}

char	*save_word(char *str, int idx1, int idx2)
{
	char	*copy;
	int		i;

	copy = (char *) malloc (sizeof(*copy) * (idx2 - idx1 + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (idx1 < idx2)
		copy[i++] = str[idx1++];
	copy[i] = '\0';
	return (copy);
}

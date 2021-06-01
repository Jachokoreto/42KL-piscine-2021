#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	h;
	int	n;

	h = 0;
	if (*to_find == '\0')
		return (str);
	while (str[h] != '\0')
	{
		n = 0;
		while (str[h + n] == to_find[n] && str[h + n] != '\0')
		{
			if (to_find[n + 1] == '\0')
				return (&str[h]);
			n++;
		}
		h++;
	}
	return (NULL);
}

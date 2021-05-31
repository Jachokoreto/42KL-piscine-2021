#include <stddef.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*ptr;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (i < ft_strlen(str))
	{
		if (*(str + i) == *to_find)
		{
			ptr = ft_strstr(str + i + 1, to_find + 1);
			if (ptr)
				return (ptr - 1);
			else
				return (NULL);
		}
		i++;
	}
	return (NULL);
}

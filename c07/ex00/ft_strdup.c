#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = (char*)malloc(sizeof(*dup) * (ft_strlen(src) + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	while (*dest != '\0')
		dest++;
	i = 0;
	while (*src != '0' && i < nb)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int main(void)
{
	char *src = "asdf";
	char dest[20] = "aabb";

	ft_strncat(dest, src, 2);
	printf("%s", dest);
	return (0);
}



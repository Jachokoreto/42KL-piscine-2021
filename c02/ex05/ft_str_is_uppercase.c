#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);

}

int main(void)
{
	char *s1 = "";
	char *s2 = "Aab";
	char *s3 = "ABC";

	printf("%d", ft_str_is_uppercase(s1));
	printf("%d", ft_str_is_uppercase(s2));
	printf("%d", ft_str_is_uppercase(s3));
	return (0);
}

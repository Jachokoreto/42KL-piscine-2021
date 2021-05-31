int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	offset;
	unsigned int	src_index;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	offset = d_len;
	src_index = 0;
	while (*(src + src_index) != '\0' )
	{
		*(dest + offset) = *(src + src_index);
		offset++;
		src_index++;
		if (offset == size - 1)
			break ;
	}
	*(dest + offset) = '\0';
	return (d_len + s_len);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	offset;
	unsigned int	src_index;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size < 1)
		return (size + s_len);
	offset = d_len;
	src_index = 0;
	while (src[src_index] != '\0' && offset < size - 1) 
	{
		dest[offset] = src[src_index];
		offset++;
		src_index++;
	}
	dest[offset] = '\0';
	if (size < d_len)
		return (s_len + size);
	else
		return (d_len + s_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jatan <jatan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 19:43:16 by jatan             #+#    #+#             */
/*   Updated: 2021/06/07 08:53:06 by jatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int				ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		total_len;
	int		i;

	if (size == 0)
		return (dest = malloc(1));
	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * size - 1;
	dest = malloc(sizeof(*dest) * total_len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strlcat(dest, strs[i], total_len + 1);
		ft_strlcat(dest, sep, total_len + 1);
		i++;
	}
	return (dest);
}

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

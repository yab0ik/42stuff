/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jee <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:14:44 by jee               #+#    #+#             */
/*   Updated: 2023/07/05 13:51:55 by jee              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
		str++;
	return (str - ptr);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	dest = ptr;
	return (dest);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	i = size;
	len = 0;
	while (--i)
		len += ft_strlen(*(strs + i));
	return (len + (size - 1) * ft_strlen(sep));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;

	if (size == 0)
		return ((char *) malloc(size * sizeof(char)));
	ptr = (char *) malloc((ft_total_len(size, strs, sep) * sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	*ptr = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, *(strs + i));
		if (i != size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}

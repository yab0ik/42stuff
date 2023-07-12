/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:27:17 by titan             #+#    #+#             */
/*   Updated: 2023/06/27 15:49:42 by titan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	available;

	dest_len = str_len(dest);
	src_len = str_len(src);
	available = size - 1 - dest_len;
	if (size > dest_len)
		available = size - dest_len - 1;
	else
		available = 0;
	while (*dest)
		dest++;
	while (available > 0)
	{
		*dest = *src;
		dest++;
		src++;
		available--;
	}
	return (dest_len + src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:53:03 by ak                #+#    #+#             */
/*   Updated: 2023/07/03 17:07:00 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j] != '\0')
		j++;
	i = 0;
	while (src[i] != '\0' && nb > 0)
	{
		dest[j] = src[i];
		i++;
		j++;
		nb--;
	}
	dest[j] = '\0';
	return (dest);
}

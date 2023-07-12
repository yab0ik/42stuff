/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:41:52 by titan             #+#    #+#             */
/*   Updated: 2023/06/27 15:35:34 by titan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = dest;
	while (*dest)
		dest++;
	while (*src && (i < nb))
	{
		*dest = src[i];
		i++;
		dest++;
	}
	*dest = '\0';
	return (ptr);
}

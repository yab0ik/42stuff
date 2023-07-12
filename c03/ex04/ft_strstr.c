/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:07:58 by ak                #+#    #+#             */
/*   Updated: 2023/07/03 18:21:06 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*cpy;
	int		c;
	int		i;

	cpy = str;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (cpy[i] != '\0')
	{
		if (cpy[i] == *to_find)
		{
			c = 0;
			while (cpy[i + c] != '\0' && to_find[c] != '\0'
				&& cpy[i + c] == to_find[c])
				c++;
			if (to_find[c] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}

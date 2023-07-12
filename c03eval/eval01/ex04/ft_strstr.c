/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:28:26 by titan             #+#    #+#             */
/*   Updated: 2023/06/27 15:43:18 by titan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_cst_cmp(char *s1, char *to_find)
{
	while (*s1 && *to_find && (*s1 == *to_find))
	{
		s1++;
		to_find++;
	}
	if (*to_find == '\0')
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (str_cst_cmp(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

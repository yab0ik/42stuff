/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tabs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:34:26 by mchua             #+#    #+#             */
/*   Updated: 2023/07/06 15:34:28 by mchua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	char	*d;

	index = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	d = (dest);
	if (!d)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*array;
	struct s_stock_str	*d;

	array = malloc((argc + 1) * sizeof(struct s_stock_str));
	d = (array);
	if (!d)
		return (NULL);
	index = 0;
	while (index < argc)
	{
		array[index].size = ft_str_length(argv[index]);
		array[index].str = argv[index];
		array[index].copy = ft_strdup(argv[index]);
		index++;
	}
	array[index].str = 0;
	array[index].copy = 0;
	return (array);
}

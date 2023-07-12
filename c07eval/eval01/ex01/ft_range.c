/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jee <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:19:35 by jee               #+#    #+#             */
/*   Updated: 2023/07/05 12:14:51 by jee              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	if (min >= max)
		return (NULL);
	size = max - min;
	ptr = (int *) malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		*(ptr + i++) = min++;
	return (ptr);
}

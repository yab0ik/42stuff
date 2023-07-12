/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:05:22 by ak                #+#    #+#             */
/*   Updated: 2023/07/09 15:26:53 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	out;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	out = 1;
	while (i < power)
	{
		out *= nb;
		i++;
	}
	return (out);
}

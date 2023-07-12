/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keyu <keyu@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:27:56 by keyu              #+#    #+#             */
/*   Updated: 2023/07/03 12:38:52 by keyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	output;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	index = 0;
	output = 1;
	while (index < power)
	{
		output *= nb;
		index++;
	}
	return (output);
}

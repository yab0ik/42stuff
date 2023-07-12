/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keyu <keyu@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:19:54 by keyu              #+#    #+#             */
/*   Updated: 2023/06/30 14:24:18 by keyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	output;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	index = 1;
	output = 1;
	while (index <= nb)
	{
		output *= index;
		index++;
	}
	return (output);
}

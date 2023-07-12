/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:14:51 by czheng            #+#    #+#             */
/*   Updated: 2023/06/25 17:00:12 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x = 2;
	int	y = 5;

	printf("Addr x: %p, Value x: %d\n", &x, x);
	printf("Addr y: %p, Value y: %d\n", &y, y);

	ft_swap(&x, &y);

	printf("Addr x: %p, New Value x: %d\n", &x, x);
	printf("Addr y: %p, New Value y: %d\n", &y, y);	
}
*/

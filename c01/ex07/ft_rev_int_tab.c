/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 22:03:02 by ak                #+#    #+#             */
/*   Updated: 2023/06/28 01:19:41 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	count;
	int	temp;

	count = 0;
	while (count <= (size - 1) / 2)
	{
		temp = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = temp;
		count++;
	}
}

/*
int	main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	for( int i = 0; i < 9; i++)
	{
	printf("%d ",array[i]);
	}

	printf("\n");

	ft_rev_int_tab(array,9);

	for(int i = 0; i < 9; i++)
	{
	printf("%d ",array[i]);
	}
	return(0);
}
*/

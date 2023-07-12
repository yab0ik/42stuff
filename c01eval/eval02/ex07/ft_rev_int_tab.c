/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:03:47 by czheng            #+#    #+#             */
/*   Updated: 2023/06/25 18:36:05 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	int array[] = {1, 2, 3, 4, 5, 6};
	
	for (int i=0; i<6; i++)
	{
		printf ("%d",array[i]);
	}
	
	printf("\n");

	ft_rev_int_tab(array, 6);
	
	for (int i=0; i<6; i++)
        {
		printf ("%d",array[i]);
        }


	return (0);
}
*/

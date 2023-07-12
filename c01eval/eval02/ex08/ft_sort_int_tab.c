/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:37:17 by czheng            #+#    #+#             */
/*   Updated: 2023/06/26 16:10:17 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count2;
	int	temp;

	count2 = 0;
	while (count2 < size)
	{
		count = 0;
		while (count < size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				temp = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = temp;
			}
			count++;
		}
		count2++;
	}
}
/*
int	main(void)
{
	int array[] = {2, 21, 15, 9, 5, 17};

	for (int i = 0; i < 6; i++)
        {
                printf ("%d, ",array[i]);
        }

        printf("\n");

        ft_sort_int_tab(array, 6);

        for (int i=0; i<6; i++)
        {
                printf ("%d, ",array[i]);
        }

	return (0);

}
*/

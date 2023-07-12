/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jee <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:46:28 by jee               #+#    #+#             */
/*   Updated: 2023/07/04 13:47:05 by jee              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	len;
	int	min;
	int	max;
	int	*ptr;
	int	i;

	min = 1;
	max = 5;
	ptr = ft_range(min, max);

	len = max - min;

	i = 0;
	while ( i++ < len)
		printf("%d ", *(ptr + i));	
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:21:24 by czheng            #+#    #+#             */
/*   Updated: 2023/06/25 17:01:34 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{

	int x = 17;
	int y = 5;

	printf ("x = %d\n",x);
	printf ("y = %d\n",y);

	ft_ultimate_div_mod(&x, &y);
	
	printf ("new x = %d\n",x);
	printf ("new y = %d\n",y);

	return (0);
}
*/

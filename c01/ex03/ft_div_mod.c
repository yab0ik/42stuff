/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:33:03 by ak                #+#    #+#             */
/*   Updated: 2023/06/27 17:43:26 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int 	main(void)
{
	int x = 9;
	int y = 5;
	int *div = &x;
	int *mod = &y;

	printf ("old div = %d\n",*div);
	printf ("old mod = %d\n",*mod);
	ft_div_mod(x, y, div, mod);

	printf ("new div = %d\n",*div);
	printf ("new mod = %d\n",*mod);

	return(0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:47:27 by ak                #+#    #+#             */
/*   Updated: 2023/06/27 19:09:29 by ak               ###   ########.fr       */
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
int main(void)
{
	int x = 8;
	int y = 2;
	printf("old : %d, %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("new : %d, %d", x, y);
}
	
*/

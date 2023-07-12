/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:44:13 by czheng            #+#    #+#             */
/*   Updated: 2023/06/24 20:31:22 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 17;
	int b = 10;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	printf ("new div = %d\n",*div);
	printf ("new mod = %d\n",*mod);

	return(0);
}
*/

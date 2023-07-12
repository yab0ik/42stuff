/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:26:19 by ak                #+#    #+#             */
/*   Updated: 2023/07/05 16:58:37 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		str = nb + 48;
		write(1, &str, 1);
	}
}

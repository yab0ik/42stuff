/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:48:09 by ak                #+#    #+#             */
/*   Updated: 2023/07/06 16:48:39 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			++j;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (-1);
		++i;
	}
	i = 0;
	while (base[i] != '\0')
		++i;
	return (i);
}

void	i_base(int nbr, int base, char *chars)
{
	if (nbr < base)
	{
		ft_putchar(chars[nbr % base]);
	}
	else
	{
		i_base(nbr / base, base, chars);
		ft_putchar(chars[nbr % base]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = len(base);
	if (l >= 2)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			i_base((nbr / l) * -1, l, base);
			ft_putchar(base[nbr % l * -1]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			i_base(nbr * -1, l, base);
		}
		else
			i_base(nbr, l, base);
	}
}

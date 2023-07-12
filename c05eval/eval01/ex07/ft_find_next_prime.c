/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keyu <keyu@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:53:44 by keyu              #+#    #+#             */
/*   Updated: 2023/07/03 15:26:08 by keyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrt_appx(int n)
{
	int	i;

	i = 0;
	while (i < 46341)
	{
		if (i * i >= n)
			return (i);
		i++;
	}
	return (46340);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	i = 2;
	while (i <= sqrt_appx(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 0;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

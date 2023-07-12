/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keyu <keyu@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:46:04 by keyu              #+#    #+#             */
/*   Updated: 2023/07/03 15:25:52 by keyu             ###   ########.fr       */
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

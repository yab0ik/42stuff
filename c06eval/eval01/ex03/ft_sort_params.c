/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:55:00 by gchuan            #+#    #+#             */
/*   Updated: 2023/06/29 15:55:00 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter ++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;
	int	toggle;

	i = 0;
	res = 0;
	toggle = 1;
	while ((s1[i] != '\0' || s2[i] != '\0') && toggle == 1)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			toggle = 0;
		}
		i++;
	}
	return (res);
}

void	ft_sort_int_tab(int size, char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j ++;
		}
		i ++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		ft_sort_int_tab(argc, argv);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

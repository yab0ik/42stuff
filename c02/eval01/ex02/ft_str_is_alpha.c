/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:33:31 by ak                #+#    #+#             */
/*   Updated: 2023/06/30 13:10:55 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z')
			|| (str[counter] >= 'a' && str[counter] <= 'z'))
			counter++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
 char test1[] = "Hello";
 char test2[] = "12345";
 char test3[] = "AbCdE12213fG";
 char test4[] = "";

 printf("Test 1: %s\n", ft_str_is_alpha(test1) ? "True" : "False");
 printf("Test 2: %s\n", ft_str_is_alpha(test2) ? "True" : "False");
 printf("Test 3: %s\n", ft_str_is_alpha(test3) ? "True" : "False");
 printf("Test 4: %s\n", ft_str_is_alpha(test4) ? "True" : "False");

     return 0;
}
*/

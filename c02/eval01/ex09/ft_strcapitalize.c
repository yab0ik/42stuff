/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 15:55:44 by ak                #+#    #+#             */
/*   Updated: 2023/07/01 17:04:06 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	wordstart;

	count = 0;
	wordstart = 1;
	ft_strlowcase(str);
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (wordstart == 1)
			{
				str[count] -= 32;
				wordstart = 0;
			}
		}
		else if (str[count] >= '0' && str[count] <= '9')
			wordstart = 0;
		else
			wordstart = 1;
		count++;
	}
	return (str);
}
/*
int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("Before: %s\n", str);

    ft_strcapitalize(str);

    printf("After: %s\n", str);

    return 0;
}
int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("Before: %s\n", str);

    ft_strcapitalize(str);

    printf("After: %s\n", str);

    return 0;*/

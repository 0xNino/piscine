/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:49:53 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/07 17:07:14 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char autres[] = "AbrRGrhRGSsegre[]][!rwgwffDgZ";
	char vide[] = "";

	printf("%d : uppercase\n", ft_str_is_uppercase(uppercase));
	printf("%d : autres\n", ft_str_is_uppercase(autres));
	printf("%d : vide\n", ft_str_is_uppercase(vide));
}
*/

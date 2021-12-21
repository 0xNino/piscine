/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:39:56 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/07 16:58:42 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char lowercase[] = "thisislowercase";
	char autres[] = "autrestypes!";
	char vide[] = "";

	printf("%d : lowercase\n", ft_str_is_lowercase(lowercase));
	printf("%d : autres\n", ft_str_is_lowercase(autres));
	printf("%d : vide\n", ft_str_is_lowercase(vide));
}
*/

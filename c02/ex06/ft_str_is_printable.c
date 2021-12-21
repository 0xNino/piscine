/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:54:37 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/07 17:08:33 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	printable[] = "printable";
	char	autres[] = "\n";
	char	vide[] = "";

	printf("%d : printable\n", ft_str_is_printable(printable));
	printf("%d : autres\n", ft_str_is_printable(autres));
	printf("%d : vide\n", ft_str_is_printable(vide));
}
*/

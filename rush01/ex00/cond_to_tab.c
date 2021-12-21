/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond_to_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:44:39 by bgoncalv          #+#    #+#             */
/*   Updated: 2021/09/11 22:44:41 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid_condition(char *str, unsigned int dim)
{
	char	pre_c;

	pre_c = ' ';
	while (*str)
	{	
		if (pre_c == ' ')
			if (!('1' <= *str && *str <= '0' + (int) dim))
				return (0);
		if (*str == ' ')
			if (!('1' <= pre_c && pre_c <= '0' + (int) dim))
				return (0);
		pre_c = *str;
		str++;
	}
	return (1);
}

unsigned int	count_space(char *src)
{	
	unsigned int	nb_space;

	nb_space = 0;
	while (*src)
	{
		if (*src == ' ')
			nb_space++;
		src++;
	}
	return (nb_space);
}

unsigned int	*str_to_cond_tab(char *args, unsigned int *dim)
{	
	unsigned int	*tab_int;
	char			*src;
	unsigned int	i;

	src = args;
	i = 0;
	if ((count_space(args) + 1) % 4)
		return (NULL);
	*dim = (count_space(args) + 1) / 4;
	if (!is_valid_condition(args, *dim))
		return (NULL);
	tab_int = malloc(sizeof(int) * (*dim) * 4);
	src = args;
	while (*src)
	{
		if (*src != ' ')
			*(tab_int + i++) = *src - '0';
		src++;
	}
	return (tab_int);
}

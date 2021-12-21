/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:11:25 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/21 16:11:27 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = src[len];
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_av;
	int			i;

	s_av = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (s_av == NULL)
		return (0);
	i = 0;
	while (av[i] && i < ac)
	{
		s_av[i].size = ft_strlen(av[i]);
		s_av[i].str = av[i];
		s_av[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_av[ac] = (t_stock_str){0, 0, 0};
	return (s_av);
}
/*
int	main(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = ft_strs_to_tab(ac, av);
	i = 0;
	while (i < ac)
	{
		printf("%d\n", tab[i].size);
		printf("%s\n", tab[i].str);
		printf("%s\n", tab[i].copy);
		i++;
	}
	free(tab);
}
*/
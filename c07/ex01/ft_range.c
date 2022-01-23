/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:17:52 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return ((void *)0);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == (void *)0)
		return ((void *)0);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int *tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		while (*tab)
		{
			printf("%d", *tab);
			tab++;
		}
	}
}
*/

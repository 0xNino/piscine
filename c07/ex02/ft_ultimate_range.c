/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:18:13 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return ((int) NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
/*
int	main(int argc, char **argv)
{
	int	size;
	int	*range;
	int	i;

	if (argc == 3)
	{
		size = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
		printf("Range size : %d\n", size);
		i = 0;
		while (i < size)
		{
			printf("%d", range[i]);
			i++;
		}
	}
	printf("\n");
	return (0);
}
*/

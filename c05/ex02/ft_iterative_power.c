/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:38:23 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/15 17:38:25 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power-- > 0)
		res = res * nb;
	return (res);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%i\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
*/
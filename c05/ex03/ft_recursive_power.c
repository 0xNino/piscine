/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:46:40 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power > 0)
		res = nb * ft_recursive_power(nb, power - 1);
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%i\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	else
		return (0);
}
*/
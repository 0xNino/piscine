/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 23:01:25 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/15 14:13:25 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (i < 0)
		return (0);
	if (i == 0)
		return (1);
	if (i > 12)
		return (0);
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*
int	main(void)
{
	int	res, exp;

	res = ft_iterative_factorial(4), exp = 24;
	printf("4! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(0), exp = 1;
	printf("0! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(1), exp = 1;
	printf("1! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(10), exp = 3628800;
	printf("10! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(12), exp = 479001600;
	printf("12! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(13), exp = 0;
	printf("13! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(-2), exp = 0;
	printf("-2! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(1000), exp = 0;
	printf("1000! (%d vs %d) -> %d\n", res, exp, res == exp);

	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:08:02 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/16 15:08:04 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	unsigned int	racine;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	racine = 0;
	while ((racine * racine) <= (unsigned int)nb)
		racine++;
	racine -= 1;
	if ((racine * racine) == (unsigned int)nb)
		return (racine);
	else
		return (0);
}
/*
int main()
{
	printf("sqrt of %d is %d\n", -136, ft_sqrt(-136));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 3, ft_sqrt(3));
	printf("sqrt of %d is %d\n", 4, ft_sqrt(4));
	printf("sqrt of %d is %d\n", 5, ft_sqrt(5));
	printf("sqrt of %d is %d\n", 6, ft_sqrt(6));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 1588500736, ft_sqrt(1588500736));
	printf("sqrt of %d is %d\n", 1415950710, ft_sqrt(1415950710));
	printf("sqrt of %d is %d\n", 276357376, ft_sqrt(276357376));
	printf("sqrt of %d is %d\n", 2104137879, ft_sqrt(2104137879));
	printf("sqrt of %d is %d\n", 1525371136, ft_sqrt(1525371136));
	printf("sqrt of %d is %d\n", 96224421, ft_sqrt(96224421));
	printf("sqrt of %d is %d\n", 1293337369, ft_sqrt(1293337369));
	printf("sqrt of %d is %d\n", 1984722702, ft_sqrt(1984722702));
	printf("sqrt of %d is %d\n", 336428964, ft_sqrt(336428964));
	printf("sqrt of %d is %d\n", 347733133, ft_sqrt(347733133));
}
*/
/* int	ft_sqrt(int nb)
{
	int	res;
	int	n;

	res = 1;
	n = 0;
	if (nb <= 0)
		return (0);
	while (res <= nb / 2)
	{
		n = res * res;
		if (n == nb)
			return (res);
		else
			res++;
	}
	return (0);
}
 */
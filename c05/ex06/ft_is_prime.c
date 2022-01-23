/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:45:39 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	unsigned int	racine;

	racine = 0;
	while ((racine * racine) <= (unsigned int)nb)
		racine++;
	racine -= 1;
	return (racine);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 3, ft_is_prime(3));
	printf("%d -> %d\n", 4, ft_is_prime(4));
	printf("%d -> %d\n", 5, ft_is_prime(5));
	printf("%d -> %d\n", 6, ft_is_prime(6));
	printf("%d -> %d\n", 7, ft_is_prime(7));
	printf("%d -> %d\n", 4219, ft_is_prime(4219));
	printf("%d -> %d\n", 7853, ft_is_prime(7853));
	printf("%d -> %d\n", 78989, ft_is_prime(78989));
	printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));
	printf("%d -> %d\n", 324096, ft_is_prime(324096));
	printf("%d -> %d\n", 423425, ft_is_prime(423425));
	printf("%d -> %d\n", 387317, ft_is_prime(387317));
	printf("%d -> %d\n", 50181, ft_is_prime(50181));
	printf("%d -> %d\n", 3078, ft_is_prime(3078));
	printf("%d -> %d\n", 224267, ft_is_prime(224267));
	printf("%d -> %d\n", 307224, ft_is_prime(307224));
	printf("%d -> %d\n", 165039, ft_is_prime(165039));
	printf("%d -> %d\n", 373850, ft_is_prime(373850));
	printf("%d -> %d\n", 43013, ft_is_prime(43013));
	printf("%d -> %d\n", 302116, ft_is_prime(302116));
	printf("%d -> %d\n", 417798, ft_is_prime(417798));
	printf("%d -> %d\n", 289835, ft_is_prime(289835));
	printf("%d -> %d\n", 82995, ft_is_prime(82995));
	printf("%d -> %d\n", 216414, ft_is_prime(216414));
	printf("%d -> %d\n", 417851, ft_is_prime(417851));
	printf("%d -> %d\n", 215112, ft_is_prime(215112));
	printf("%d -> %d\n", 362060, ft_is_prime(362060));
	printf("%d -> %d\n", 113741, ft_is_prime(113741));
	printf("%d -> %d\n", 172625, ft_is_prime(172625));
	printf("%d -> %d\n", 6738, ft_is_prime(6738));
	printf("%d -> %d\n", 265300, ft_is_prime(265300));
	printf("%d -> %d\n", 69720, ft_is_prime(69720));
	printf("%d -> %d\n", 104026, ft_is_prime(104026));
	printf("%d -> %d\n", 3691, ft_is_prime(3691));
	printf("%d -> %d\n", 317056, ft_is_prime(317056));
	printf("%d -> %d\n", 134279, ft_is_prime(134279));
	printf("%d -> %d\n", 234632, ft_is_prime(234632));
	printf("%d -> %d\n", 256137, ft_is_prime(256137));
	printf("%d -> %d\n", 381086, ft_is_prime(381086));
	printf("%d -> %d\n", 33967, ft_is_prime(33967));
	printf("%d -> %d\n", 14024, ft_is_prime(14024));
	printf("%d -> %d\n", 103610, ft_is_prime(103610));
	printf("%d -> %d\n", 46781, ft_is_prime(46781));
	printf("%d -> %d\n", 259272, ft_is_prime(259272));
	printf("%d -> %d\n", 196298, ft_is_prime(196298));
	printf("%d -> %d\n", 40139, ft_is_prime(40139));
	printf("%d -> %d\n", 86733, ft_is_prime(86733));
	printf("%d -> %d\n", 11471, ft_is_prime(11471));
	printf("%d -> %d\n", 6869, ft_is_prime(6869));
	printf("%d -> %d\n", 302296, ft_is_prime(302296));
	printf("%d -> %d\n", 306910, ft_is_prime(306910));
	printf("%d -> %d\n", 164067, ft_is_prime(164067));
	printf("%d -> %d\n", 346342, ft_is_prime(346342));
	printf("%d -> %d\n", 411880, ft_is_prime(411880));
	printf("%d -> %d\n", 273129, ft_is_prime(273129));
	printf("%d -> %d\n", 23278, ft_is_prime(23278));
	printf("%d -> %d\n", 150767, ft_is_prime(150767));
	printf("%d -> %d\n", 166270, ft_is_prime(166270));
	printf("%d -> %d\n", 9979, ft_is_prime(9979));
	printf("%d -> %d\n", 347902, ft_is_prime(347902));
	printf("%d -> %d\n", 151810, ft_is_prime(151810));
	printf("%d -> %d\n", 341254, ft_is_prime(341254));
	printf("%d -> %d\n", 95497, ft_is_prime(95497));
	printf("%d -> %d\n", 66831, ft_is_prime(66831));
	printf("%d -> %d\n", 64281, ft_is_prime(64281));
	printf("%d -> %d\n", 217025, ft_is_prime(217025));
	printf("%d -> %d\n", 259377, ft_is_prime(259377));
	printf("%d -> %d\n", 148783, ft_is_prime(148783));
	printf("%d -> %d\n", 329008, ft_is_prime(329008));
	printf("%d -> %d\n", 33073, ft_is_prime(33073));
	printf("%d -> %d\n", 14651, ft_is_prime(14651));
	printf("%d -> %d\n", 305469, ft_is_prime(305469));
	printf("%d -> %d\n", 65856, ft_is_prime(65856));
	printf("%d -> %d\n", 244038, ft_is_prime(244038));
	printf("%d -> %d\n", 312717, ft_is_prime(312717));
	printf("%d -> %d\n", 334672, ft_is_prime(334672));
	printf("%d -> %d\n", 284501, ft_is_prime(284501));
	printf("%d -> %d\n", 147802, ft_is_prime(147802));
	printf("%d -> %d\n", 73054, ft_is_prime(73054));
	printf("%d -> %d\n", 8555, ft_is_prime(8555));
	printf("%d -> %d\n", 320366, ft_is_prime(320366));
	printf("%d -> %d\n", 198001, ft_is_prime(198001));
	printf("%d -> %d\n", 33138, ft_is_prime(33138));
	printf("%d -> %d\n", 152951, ft_is_prime(152951));
	printf("%d -> %d\n", 217976, ft_is_prime(217976));
	printf("%d -> %d\n", 306558, ft_is_prime(306558));
	printf("%d -> %d\n", 84365, ft_is_prime(84365));
	printf("%d -> %d\n", 8600, ft_is_prime(8600));
	printf("%d -> %d\n", 297199, ft_is_prime(297199));
	printf("%d -> %d\n", 83871, ft_is_prime(83871));
	printf("%d -> %d\n", 373154, ft_is_prime(373154));
	printf("%d -> %d\n", 213931, ft_is_prime(213931));
	printf("%d -> %d\n", 214445, ft_is_prime(214445));
	printf("%d -> %d\n", 256950, ft_is_prime(256950));
	printf("%d -> %d\n", 138682, ft_is_prime(138682));
	printf("%d -> %d\n", 20412, ft_is_prime(20412));
	printf("%d -> %d\n", 116159, ft_is_prime(116159));
	printf("%d -> %d\n", 409025, ft_is_prime(409025));
	printf("%d -> %d\n", 253890, ft_is_prime(253890));
	printf("%d -> %d\n", 94151, ft_is_prime(94151));
	printf("%d -> %d\n", 39500, ft_is_prime(39500));
	printf("%d -> %d\n", 81882, ft_is_prime(81882));
	printf("%d -> %d\n", 354640, ft_is_prime(354640));
	printf("%d -> %d\n", 108020, ft_is_prime(108020));
	printf("%d -> %d\n", 329982, ft_is_prime(329982));
	printf("%d -> %d\n", 404983, ft_is_prime(404983));
	printf("%d -> %d\n", 12792, ft_is_prime(12792));
	printf("%d -> %d\n", 30205, ft_is_prime(30205));
	printf("%d -> %d\n", 170494, ft_is_prime(170494));
	printf("%d -> %d\n", 361, ft_is_prime(361));
	printf("%d -> %d\n", 529, ft_is_prime(529));
	printf("%d -> %d\n", 841, ft_is_prime(841));
	return (0);
}
*/

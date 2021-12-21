/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:26:00 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/16 17:26:01 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int main()
{
	printf("%d -> %d\n", -3963, ft_find_next_prime(-3963));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	printf("%d -> %d\n", 353281, ft_find_next_prime(353281));
	printf("%d -> %d\n", 235010, ft_find_next_prime(235010));
	printf("%d -> %d\n", 72197, ft_find_next_prime(72197));
	printf("%d -> %d\n", 136213, ft_find_next_prime(136213));
	printf("%d -> %d\n", 49669, ft_find_next_prime(49669));
	printf("%d -> %d\n", 2797, ft_find_next_prime(2797));
	printf("%d -> %d\n", 334885, ft_find_next_prime(334885));
	printf("%d -> %d\n", 404518, ft_find_next_prime(404518));
	printf("%d -> %d\n", 346665, ft_find_next_prime(346665));
	printf("%d -> %d\n", 397867, ft_find_next_prime(397867));
	printf("%d -> %d\n", 254002, ft_find_next_prime(254002));
	printf("%d -> %d\n", 419894, ft_find_next_prime(419894));
	printf("%d -> %d\n", 417343, ft_find_next_prime(417343));
	printf("%d -> %d\n", 257089, ft_find_next_prime(257089));
	printf("%d -> %d\n", 404552, ft_find_next_prime(404552));
	printf("%d -> %d\n", 30811, ft_find_next_prime(30811));
	printf("%d -> %d\n", 41053, ft_find_next_prime(41053));
	printf("%d -> %d\n", 178785, ft_find_next_prime(178785));
	printf("%d -> %d\n", 399970, ft_find_next_prime(399970));
	printf("%d -> %d\n", 320104, ft_find_next_prime(320104));
	printf("%d -> %d\n", 49258, ft_find_next_prime(49258));
	printf("%d -> %d\n", 333932, ft_find_next_prime(333932));
	printf("%d -> %d\n", 210032, ft_find_next_prime(210032));
	printf("%d -> %d\n", 115306, ft_find_next_prime(115306));
	printf("%d -> %d\n", 272523, ft_find_next_prime(272523));
	printf("%d -> %d\n", 348300, ft_find_next_prime(348300));
	printf("%d -> %d\n", 74392, ft_find_next_prime(74392));
	printf("%d -> %d\n", 18587, ft_find_next_prime(18587));
	printf("%d -> %d\n", 4255, ft_find_next_prime(4255));
	printf("%d -> %d\n", 310947, ft_find_next_prime(310947));
	printf("%d -> %d\n", 110246, ft_find_next_prime(110246));
	printf("%d -> %d\n", 123049, ft_find_next_prime(123049));
	printf("%d -> %d\n", 228530, ft_find_next_prime(228530));
	printf("%d -> %d\n", 271545, ft_find_next_prime(271545));
	printf("%d -> %d\n", 415942, ft_find_next_prime(415942));
	printf("%d -> %d\n", 334538, ft_find_next_prime(334538));
	printf("%d -> %d\n", 384954, ft_find_next_prime(384954));
	printf("%d -> %d\n", 139479, ft_find_next_prime(139479));
	printf("%d -> %d\n", 215770, ft_find_next_prime(215770));
	printf("%d -> %d\n", 173275, ft_find_next_prime(173275));
	printf("%d -> %d\n", 298722, ft_find_next_prime(298722));
	printf("%d -> %d\n", 296164, ft_find_next_prime(296164));
	printf("%d -> %d\n", 255725, ft_find_next_prime(255725));
	printf("%d -> %d\n", 170735, ft_find_next_prime(170735));
	printf("%d -> %d\n", 125908, ft_find_next_prime(125908));
	printf("%d -> %d\n", 112511, ft_find_next_prime(112511));
	printf("%d -> %d\n", 398591, ft_find_next_prime(398591));
	printf("%d -> %d\n", 357122, ft_find_next_prime(357122));
	printf("%d -> %d\n", 262, ft_find_next_prime(262));
	printf("%d -> %d\n", 198932, ft_find_next_prime(198932));
	printf("%d -> %d\n", 314244, ft_find_next_prime(314244));
	printf("%d -> %d\n", 408353, ft_find_next_prime(408353));
	printf("%d -> %d\n", 133922, ft_find_next_prime(133922));
	printf("%d -> %d\n", 284451, ft_find_next_prime(284451));
	printf("%d -> %d\n", 108836, ft_find_next_prime(108836));
	printf("%d -> %d\n", 225576, ft_find_next_prime(225576));
	printf("%d -> %d\n", 342825, ft_find_next_prime(342825));
	printf("%d -> %d\n", 383793, ft_find_next_prime(383793));
	printf("%d -> %d\n", 319283, ft_find_next_prime(319283));
	printf("%d -> %d\n", 134971, ft_find_next_prime(134971));
	printf("%d -> %d\n", 307006, ft_find_next_prime(307006));
	printf("%d -> %d\n", 414541, ft_find_next_prime(414541));
	printf("%d -> %d\n", 253262, ft_find_next_prime(253262));
	printf("%d -> %d\n", 302418, ft_find_next_prime(302418));
	printf("%d -> %d\n", 323413, ft_find_next_prime(323413));
	printf("%d -> %d\n", 82660, ft_find_next_prime(82660));
	printf("%d -> %d\n", 193370, ft_find_next_prime(193370));
	printf("%d -> %d\n", 213858, ft_find_next_prime(213858));
	printf("%d -> %d\n", 382308, ft_find_next_prime(382308));
	printf("%d -> %d\n", 311141, ft_find_next_prime(311141));
	printf("%d -> %d\n", 303474, ft_find_next_prime(303474));
	printf("%d -> %d\n", 315764, ft_find_next_prime(315764));
	printf("%d -> %d\n", 23421, ft_find_next_prime(23421));
	printf("%d -> %d\n", 312191, ft_find_next_prime(312191));
	printf("%d -> %d\n", 175490, ft_find_next_prime(175490));
	printf("%d -> %d\n", 326020, ft_find_next_prime(326020));
	printf("%d -> %d\n", 270731, ft_find_next_prime(270731));
	printf("%d -> %d\n", 420239, ft_find_next_prime(420239));
	printf("%d -> %d\n", 199568, ft_find_next_prime(199568));
	printf("%d -> %d\n", 301462, ft_find_next_prime(301462));
	printf("%d -> %d\n", 249071, ft_find_next_prime(249071));
	printf("%d -> %d\n", 44958, ft_find_next_prime(44958));
	printf("%d -> %d\n", 268197, ft_find_next_prime(268197));
	printf("%d -> %d\n", 233894, ft_find_next_prime(233894));
	printf("%d -> %d\n", 188851, ft_find_next_prime(188851));
	printf("%d -> %d\n", 281530, ft_find_next_prime(281530));
	printf("%d -> %d\n", 444, ft_find_next_prime(444));
	printf("%d -> %d\n", 307137, ft_find_next_prime(307137));
	printf("%d -> %d\n", 298438, ft_find_next_prime(298438));
	printf("%d -> %d\n", 292807, ft_find_next_prime(292807));
	printf("%d -> %d\n", 4049, ft_find_next_prime(4049));
	printf("%d -> %d\n", 53715, ft_find_next_prime(53715));
	printf("%d -> %d\n", 267220, ft_find_next_prime(267220));
	printf("%d -> %d\n", 82392, ft_find_next_prime(82392));
	printf("%d -> %d\n", 250848, ft_find_next_prime(250848));
	printf("%d -> %d\n", 995, ft_find_next_prime(995));
	printf("%d -> %d\n", 276457, ft_find_next_prime(276457));
	printf("%d -> %d\n", 263664, ft_find_next_prime(263664));
	printf("%d -> %d\n", 275962, ft_find_next_prime(275962));
	printf("%d -> %d\n", 46588, ft_find_next_prime(46588));
}
*/
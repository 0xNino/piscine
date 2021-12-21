/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:33:11 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/02 16:47:29 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_numbers(int n)
{
	int	nombre1;
	int	nombre2;

	nombre1 = n / 10 + 48;
	nombre2 = n % 10 + 48;
	write(1, &nombre1, 1);
	write(1, &nombre2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a);
			write(1, " ", 1);
			ft_print_numbers(b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

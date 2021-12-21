/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:03:32 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/13 14:55:13 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	a;

	a = nb;
	if (a == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		a = 147483648;
	}
	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + 48);
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	ft_putnbr(atoi(argv[1]));
}
*/

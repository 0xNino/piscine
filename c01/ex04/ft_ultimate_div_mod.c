/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:46:49 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/05 15:03:28 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_div_mod (int *a, int *b);

int	main(void)
{
	int		c = 7;
	int		d = 3;
	int*	e = &c;
	int* 	f = &d;

	printf ("%d\n", *e );
	printf ("%d\n", *f);
	ft_ultimate_div_mod (e, f);
	printf ("%d\n", *e);
	printf ("%d\n", *f);
}

void	ft_ultimate_div_mod (int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

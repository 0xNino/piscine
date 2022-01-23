/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:46:49 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

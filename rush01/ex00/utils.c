/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:01:32 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/12 22:02:47 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

void	print_ext_board(unsigned int **board, unsigned int dim)
{
	unsigned int	x;
	unsigned int	y;
	char			c;

	x = 0;
	y = 0;
	while (x < dim + 2)
	{
		y = 0;
		while (y < dim + 2)
		{	
			c = board[x][y] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

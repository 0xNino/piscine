/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:04:41 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/12 21:27:17 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "board.h"

int	box_fill(unsigned int remain_box, unsigned int **board, unsigned int dim)
{
	unsigned int	j;
	unsigned int	box_size;
	t_coord			*coord;

	j = 0;
	box_size = (remain_box / dim) + 1;
	while (++j <= dim)
	{
		coord = init_coord(dim - (remain_box % dim), j);
		if (check_case(board, dim, coord, box_size))
		{
			board[j][dim - (remain_box % dim)] = box_size;
			if (!remain_box)
				return (1);
			else
			{
				if (box_fill(remain_box - 1, board, dim))
					return (1);
				else
					board[j][dim - (remain_box % dim)] = 0;
			}
		}
		free_coord(&coord);
	}
	return (0);
}

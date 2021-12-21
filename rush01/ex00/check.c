/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:13:46 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/12 22:28:15 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "coordinate.h"
#include "count_boxes.h"
#include <stdlib.h>
#include "utils.h"
#include "bypass.h"

int	compute_cond(unsigned int cond, unsigned int up_to, unsigned int val,
		unsigned int count)
{
	unsigned int	upper_bound;
	unsigned int	lower_bound;

	upper_bound = min(up_to, val) + count;
	lower_bound = min(up_to, 2) + count;
	return (cond <= upper_bound && cond >= lower_bound);
}

int	test_cond(unsigned int **board, unsigned int dim, t_coord *coord,
		unsigned int val)
{
	int	cond[4];
	int	*bypass;

	bypass = get_bypass(board, dim, coord, val);
	cond[0] = bypass[0] || compute_cond(board[0][coord->x], coord->y, val,
			count_boxes_down(board, dim, coord, val));
	cond[1] = bypass[1] || compute_cond(board[dim + 1][coord->x],
			dim - coord->y + 1, val, count_boxes_up(board, coord, val));
	cond[2] = bypass[2] || compute_cond(board[coord->y][0], coord->x, val,
			count_boxes_right(board, dim, coord, val));
	cond[3] = bypass[3] || compute_cond(board[coord->y][dim + 1],
			dim - coord->x + 1, val, count_boxes_left(board, coord, val));
	free(bypass);
	return (cond[0] && cond[1] && cond[2] && cond[3]);
}

int	test_val(unsigned int **board, unsigned int dim, t_coord *coord,
		unsigned int val)
{
	unsigned int	x;
	unsigned int	y;

	if (board[coord->y][coord->x] != 0)
		return (0);
	x = 1;
	while (x <= dim)
	{
		if (board[coord->y][x] == val)
			return (0);
		++x;
	}
	y = 1;
	while (y <= dim)
	{
		if (board[y][coord->x] == val)
			return (0);
		++y;
	}
	return (1);
}

int	check_case(unsigned int **board, unsigned int dim, t_coord *coord,
		unsigned int val)
{
	int	check_val;
	int	check_cond;

	check_cond = test_cond(board, dim, coord, val);
	check_val = test_val(board, dim, coord, val);
	return (check_cond && check_val);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_boxes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 03:45:10 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/12 04:07:15 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "coordinate.h"

unsigned int	count_boxes_right(unsigned int **board,	const unsigned int dim,
		t_coord *coord, const unsigned int val)
{
	unsigned int	x;
	unsigned int	max;
	unsigned int	count;
	unsigned int	v;

	max = val;
	x = coord->x + 1;
	count = 0;
	while (x <= dim)
	{
		v = board[coord->y][x];
		if (v > max)
		{
			++count;
			max = v;
		}
		++x;
	}
	return (count);
}

unsigned int	count_boxes_left(unsigned int **board, t_coord *coord,
		const unsigned int val)
{
	unsigned int	x;
	unsigned int	max;
	unsigned int	count;
	unsigned int	v;

	max = val;
	x = coord->x - 1;
	count = 0;
	while (x > 0)
	{
		v = board[coord->y][x];
		if (v > max)
		{
			++count;
			max = v;
		}
		--x;
	}
	return (count);
}

unsigned int	count_boxes_down(unsigned int **board, const unsigned int dim,
		t_coord *coord, const unsigned int val)
{
	unsigned int	y;
	unsigned int	max;
	unsigned int	count;
	unsigned int	v;

	max = val;
	y = coord->y + 1;
	count = 0;
	while (y <= dim)
	{
		v = board[y][coord->x];
		if (v > max)
		{
			++count;
			max = v;
		}
		++y;
	}
	return (count);
}

unsigned int	count_boxes_up(unsigned int **board, t_coord *coord,
		const unsigned int val)
{
	unsigned int	y;
	unsigned int	max;
	unsigned int	count;
	unsigned int	v;

	max = val;
	y = coord->y - 1;
	count = 0;
	while (y > 0)
	{
		v = board[y][coord->x];
		if (v > max)
		{
			++count;
			max = v;
		}
		--y;
	}
	return (count);
}

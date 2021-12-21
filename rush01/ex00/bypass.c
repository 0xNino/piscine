/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bypass.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:05:27 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/12 22:28:40 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "coordinate.h"
#include <stdlib.h>

int	*get_bypass_row(unsigned int **board, unsigned int dim, t_coord *coord,
		unsigned int val)
{
	unsigned int	x;
	int				*bypass_row;

	bypass_row = malloc(sizeof(int) * 2);
	bypass_row[0] = 0;
	bypass_row[1] = 0;
	x = 1;
	while (x <= dim)
	{
		if (board[coord->y][x] > val)
		{
			if (x < coord->x)
			{
				bypass_row[0] = 1;
				x = coord->x;
			}
			else if (x > coord->x)
			{
				bypass_row[1] = 1;
				x = dim;
			}
		}
		++x;
	}
	return (bypass_row);
}

int	*get_bypass_col(unsigned int **board, unsigned int dim, t_coord *coord,
		unsigned int val)
{
	unsigned int	y;
	int				*bypass_col;

	bypass_col = malloc(sizeof(int) * 2);
	bypass_col[0] = 0;
	bypass_col[1] = 0;
	y = 1;
	while (y <= dim)
	{
		if (board[y][coord->x] > val)
		{
			if (y < coord->y)
			{
				bypass_col[0] = 1;
				y = coord->y;
			}
			else if (y > coord->y)
			{
				bypass_col[1] = 1;
				y = dim;
			}
		}
		++y;
	}
	return (bypass_col);
}

int	*get_bypass(unsigned int **board, unsigned int dim, t_coord *coord,
		unsigned int val)
{
	int	*bypass;
	int	*bypass_row;
	int	*bypass_col;

	bypass = malloc(sizeof(int) * 4);
	bypass_col = get_bypass_col(board, dim, coord, val);
	bypass_row = get_bypass_row(board, dim, coord, val);
	bypass[0] = bypass_col[0];
	bypass[1] = bypass_col[1];
	bypass[2] = bypass_row[0];
	bypass[3] = bypass_row[1];
	free(bypass_col);
	free(bypass_row);
	return (bypass);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:44:30 by bgoncalv          #+#    #+#             */
/*   Updated: 2021/09/12 23:11:35 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "cond_to_tab.h"
#include "board.h"
#include "box_fill.h"

int	main(int argc, char **argv)
{
	unsigned int	*cond;
	unsigned int	dim;
	unsigned int	**board;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	cond = str_to_cond_tab(argv[1], &dim);
	if (cond == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	board = init_tab(cond, dim);
	free(cond);
	if (box_fill(dim * dim - 1, board, dim))
		print_board(board, dim);
	else
		write(1, "Error\n", 6);
	free_board(board, dim + 2);
	return (0);
}

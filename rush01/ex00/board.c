/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino  <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:20:52 by 0xNino            #+#    #+#             */
/*   Updated: 2021/09/12 00:57:18 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

unsigned int	**tab_to_zero(unsigned int dim)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	**tab;

	x = 0;
	tab = malloc((dim + 2) * sizeof(unsigned int *));
	while (x < dim + 2)
	{
		tab[x] = malloc((dim + 2) * sizeof(unsigned int));
		y = 0;
		while (y < dim + 2)
		{
			tab[x][y] = 0;
			y++;
		}
		x++;
	}
	return (tab);
}

void	cond_to_board(unsigned int **tab, unsigned int *cond, unsigned int dim)
{
	unsigned int	i;

	i = 0;
	while (i < dim)
	{	
		tab[0][i + 1] = cond[i];
		i++;
	}
	while (i < dim * 2)
	{
		tab[dim + 1][i % dim + 1] = cond[i];
		i++;
	}
	while (i < dim * 3)
	{	
		tab[i % dim + 1][0] = cond[i];
		i++;
	}
	while (i < dim * 4 )
	{
		tab[i % dim + 1][dim + 1] = cond[i];
		i++;
	}
}

unsigned int	**init_tab(unsigned int *cond, unsigned int dim)
{
	unsigned int	**tab;

	tab = tab_to_zero(dim);
	cond_to_board(tab, cond, dim);
	return (tab);
}

void	print_board(unsigned int **board, unsigned int dim)
{
	unsigned int	x;
	unsigned int	y;
	char			c;

	x = 1;
	while (x < dim + 1)
	{
		y = 1;
		while (y < dim + 1)
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

void	free_board(unsigned int **board, unsigned int dim)
{
	unsigned int	i;

	i = 0;
	while (i < dim)
	{
		free(board[i]);
		i++;
	}
	free(board);
}

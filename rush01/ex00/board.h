/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 00:51:34 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/12 01:15:52 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H

unsigned int	**init_tab(unsigned int *cond, unsigned int dim);
void			print_board(unsigned int **board, unsigned int dim);
void			free_board(unsigned int **board, unsigned int dim);

#endif

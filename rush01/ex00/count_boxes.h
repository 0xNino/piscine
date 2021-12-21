/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_boxes.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 03:55:34 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/12 21:32:40 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COUNT_BOXES_H
# define COUNT_BOXES_H

unsigned int	count_boxes_right(unsigned int **board,	const unsigned int dim,
					t_coord *coord, const unsigned int val);
unsigned int	count_boxes_left(unsigned int **board, t_coord *coord,
					const unsigned int val);
unsigned int	count_boxes_down(unsigned int **board, const unsigned int dim,
					t_coord *coord, const unsigned int val);
unsigned int	count_boxes_up(unsigned int **board, t_coord *coord,
					const unsigned int val);

#endif

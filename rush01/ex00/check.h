/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:45:10 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/11 23:17:22 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H
# include "coordinate.h"

int	check_case(unsigned int **board, unsigned int dim, t_coord *coord,
		unsigned int val);

#endif

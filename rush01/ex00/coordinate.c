/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:58:33 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/11 19:59:30 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "coordinate.h"
#include <stddef.h>
#include <stdlib.h>

t_coord	*init_coord(int x, int y)
{
	t_coord	*coord;

	coord = malloc(sizeof(t_coord));
	coord->x = x;
	coord->y = y;
	return (coord);
}

void	free_coord(t_coord **coord)
{
	free(*coord);
	*coord = NULL;
}

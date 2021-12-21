/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:12:40 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/02 16:45:22 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	y;
	char	p;

	y = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &y, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

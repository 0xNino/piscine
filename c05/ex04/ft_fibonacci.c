/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:45:13 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/16 14:45:15 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	int	res;

	res = index;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	else
		res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (res);
}
/*
int main()
{
	int i = 0;
	while (i < 15)
	{
		printf("%i\n", ft_fibonacci(i));
		i++;
	}
	return (0);
}
*/

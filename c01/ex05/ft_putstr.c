/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:53:05 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/04 23:00:06 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void ft_putstr(char *str);

int main(void)
{
	ft+putstr("ouhrvrw");
}
*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

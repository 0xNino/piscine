/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:01:42 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/05 09:40:26 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
int ft_strlen(char *str);

int main()
{
ft_strlen("12345");
}
*/
int	ft_strlen(char *str)
{
	int	 i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

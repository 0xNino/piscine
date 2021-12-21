/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 01:53:26 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/13 14:49:55 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	signe(int neg, int i)
{
	if (neg % 2 == 0)
	{	
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	while (*str && (is_space(*str)))
	{
		str++;
	}
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
		{
			neg++;
		}
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		i = i * 10 + (int) *str - '0';
		str++;
	}
	return (signe(neg, i));
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (atoi(argv[1]) == ft_atoi(argv[1]))
			printf("Success : atoi == ft_atoi :)\n");
		else
		{
			printf("%i\n", ft_atoi(argv[1]));
			return ft_atoi(argv[1]);
		}
	}
	else
		return (0);
}
*/

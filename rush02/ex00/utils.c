/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:53:55 by fmalizia          #+#    #+#             */
/*   Updated: 2021/09/18 16:54:25 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

unsigned long long	ft_atoi(char *str)
{
	unsigned long long	nbr;

	nbr = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		++str;
	if (*str == '-')
		return (-1);
	while ('0' <= *str && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
		++str;
	}
	return (nbr);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_isspace(char c)
{
	if (c == 32 || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	size_num(int n)
{
	int	i;

	i = 0;
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = size_num(n);
	str = (char *) malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:36:48 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/20 18:36:50 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_pos(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		while (base[j] && i != j)
		{
			if (base[j++] == base[i])
				return (0);
		}
		j = 0;
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_inside(char c, char *base)
{
	int	i;
	int	inside;

	i = 0;
	inside = 0;
	while (base[i])
		if (c == base[i++])
			inside++;
	return (inside);
}

int	ft_sign(char *str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	i *= sign;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	base_len;
	int	nbr;
	int	sign;

	if (!ft_check_base(base))
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	sign = 1;
	nbr = 0;
	i = ft_sign(str);
	if (i < 0)
	{
		i *= -1;
		sign *= -1;
	}
	while (ft_inside(str[i], base))
	{
		nbr += ft_pos(str[i++], base);
		nbr *= base_len;
	}
	return ((nbr / base_len) * sign);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_atoi_base(argv[1], argv[2]);
	else
		return (0);
}

	printf("%d\n", (nbr / base_len) * sign); // REMOVE !!!!!!
*/
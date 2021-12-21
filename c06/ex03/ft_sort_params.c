/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:08:05 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/14 14:08:06 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	main(int argc, char **args)
{
	int		i;
	char	*temp;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(args[i], args[i + 1]) > 0)
			{
				temp = args[i];
				args[i] = args[i + 1];
				args[i + 1] = temp;
				i = 0;
			}
			i++;
		}
		i = 1;
		while (args[i])
		{
			ft_putstr(args[i]);
			i++;
		}
	}
	return (0);
}

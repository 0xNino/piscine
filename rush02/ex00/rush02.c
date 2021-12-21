/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:18:08 by fmalizia          #+#    #+#             */
/*   Updated: 2021/09/18 16:18:10 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"
#include "parsing.h"

int		check_format(int argc, char **argv);
int		check_dict(char **ref);
void	ft_keys_start( char *number, char **ref);

int	main(int argc, char **argv)
{
	int		version;
	char	**ref;

	ref = NULL;
	version = check_format(argc, argv);
	if (version == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (version == 1)
	{
		ref = fill_struct(parsing("default.dict"));
		if (check_dict(ref) == 0)
		{
			free (ref);
			return (0);
		}
		ft_keys_start(argv[1], ref);
		return (1);
	}
	else if (version == 2)
	{
		ref = fill_struct(parsing(argv[1]));
		if (check_dict(ref) == 0)
		{
			free (ref);
			return (0);
		}
	}
	ft_keys_start(argv[2], ref);
	return (1);
}

int	check_format(int argc, char **argv)
{
	long long	nb;

	nb = 0;
	if (argc < 2 || argc > 3)
		return (0);
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (nb < 0)
			return (0);
		return (1);
	}
	if (argc == 3)
		nb = ft_atoi(argv[2]);
	if (nb < 0)
		return (0);
	return (2);
}

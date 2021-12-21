/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:44:58 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/18 16:45:01 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "utils.h"
#include "utils2.h"

char	**tab_init(char **line)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	line = malloc(sizeof(char *) * 1000);
	while (x < 1000)
	{
		line[x] = malloc(sizeof(char) * 1000);
		y = 0;
		while (y < 1000)
		{
			line[x][y] = '0';
			y++;
		}
		x++;
	}
	return (line);
}

char	**struct_tab_init(char **ref)
{
	unsigned int	x;

	x = 0;
	ref = malloc(sizeof(char *) * 1000);
	while (x < 1000)
	{
		ref[x] = malloc(sizeof(char) * 100);
		x++;
	}
	return (ref);
}

char	**parsing(char *file)
{
	char	*dict;
	int		size;
	int		i;
	char	**line;
	int		j;
	int		k;
	int		x;
	int		fd;

	i = 0;
	j = 0;
	k = 0;
	x = 0;
	fd = 0;
	line = NULL;
	dict = NULL;
	dict = malloc(sizeof(char) * 1000);
	if (dict == NULL)
		return (0);
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write (1, "Dict Error\n", 11);
		free(dict);
		return (0);
	}
	size = read(fd, dict, 10000);
	line = tab_init(line);
	if (line == NULL)
		return (0);
	while (k < size)
	{
		if (dict[0] == '\n')
			k++;
		if (k > 0)
			if (dict[k - 1] == '\n' && dict[k] == '\n')
				k++;
		while (dict[k] != ':' && k < size)
		{
			if (!(ft_isspace(dict[k])))
			{
				line[i][j] = dict[k];
				j++;
			}
			k++;
		}
		line[i][j] = dict[k];
		j++;
		k++;
		while (ft_isspace(dict[k]) && k < size)
			k++;
		while (dict[k] != '\n' && k < size)
		{
			line[i][j] = dict[k];
			j++;
			k++;
		}
		x = k;
		while (ft_isspace(dict[x]))
		{
			line[i][j] = '\0';
			x--;
			j--;
		}
		line[i][j + 1] = '\0';
		j = 0;
		i++;
	}
	line[i + 1][0] = '\0';
	free(dict);
	return (line);
}

char	**fill_struct(char **str)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	**ref;

	ref = NULL;
	ref = struct_tab_init(ref);
	if (ref == NULL)
		return (0);
	k = 0;
	i = 0;
	while (str[i][0] != '\0')
	{
		l = 0;
		j = 0;
		while (str[i][j] && str[i][j] != ':')
		{
			ref[k][l] = str[i][j];
			j++;
			++l;
		}
		ref[k][l] = '\0';
		l = 0;
		++k;
		++j;
		while (str[i][j])
		{
			ref[k][l] = str[i][j];
			j++;
			++l;
		}
		ref[k][l] = '\0';
		++k;
		i++;
	}
	tab_free(str);
	return (ref);
}

void	tab_free(char **ref)
{
	int	i;

	i = 0;
	while (i < 1000)
	{
		free(ref[i]);
		i++;
	}
	free(ref);
}

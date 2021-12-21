/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarieth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:45:58 by ymarieth          #+#    #+#             */
/*   Updated: 2021/09/19 15:46:12 by ymarieth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "utils.h"
#include "utils2.h"
#include "parsing.h"

// i integer from 0 to 999 to convert to keys
// keys pointer on array where to write the result

unsigned long long int	ft_write_0_to_999( unsigned long long int i, unsigned long long  *keys)
{
	unsigned long long	n_keys;

	n_keys = 0;
	if (i > 99)
	{
		keys[n_keys++] = i / 100;
		keys[n_keys++] = 100;
	}
	i = i % 100;
	if (i > 19)
	{
		keys[n_keys] = i / 10;
		keys[n_keys++] *= 10;
		i = i % 10;
	}
	keys[n_keys++] = i;
	return (n_keys);
}

unsigned long long int	ft_split_integer_to_1000( unsigned long long int i, unsigned long long *groups)
{
	unsigned long long int	n_groups;

	n_groups = 0;
	while (i >= 1000)
	{
		groups[n_groups++] = i % 1000;
		i = i / 1000;
	}
	groups[n_groups++] = i;
	return (n_groups);
}

unsigned long long	ft_write_int_to_words( unsigned long long int i, unsigned long long int *keys)
{
	unsigned long long int	n_keys;
	unsigned long long int	groups[7];
	unsigned long long int	n_groups;
	unsigned long long int	group_values[7] = {0, 1000, 1000000, 1000000000, 1000000000000, 1000000000000000, 1000000000000000000};

	n_groups = ft_split_integer_to_1000(i, groups);
	n_keys = 0;
	while (n_groups > 0)
	{
		n_groups--;
		if (groups[n_groups] != 0)
		{
			n_keys += ft_write_0_to_999(groups[n_groups], &keys[n_keys]);
			keys[n_keys++] = group_values[n_groups];
		}
	}
	return (n_keys);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

void	ft_search_display_key(unsigned long long key, char **ref, unsigned long long num_entries )
{
	unsigned long long	k;

	k = 0;
	while (k < num_entries)
	{
		if (key == ft_atoi(ref[k]))
		{
			if (key != 0)
			{
				ft_putstr(ref[k + 1]);
				write (1, " ", 1);
				break ;
			}
			if (key == 0)
			{
				tab_free(ref);
				return ;
			}
		}
		k += 2;
	}
}

void	ft_parcour_key(unsigned long long *keys, unsigned long long n_keys, char **ref, unsigned long long num_entries )
{
	unsigned long long	i;

	i = 0;
	while (i < n_keys)
	{
		ft_search_display_key(keys[i], ref, num_entries);
		i++;
	}
	if (n_keys == 0)
		write(1, "zero", 4);
	write (1, "\n", 1);
}

void ft_keys_start( char *number, char **ref)
{
	unsigned long long	i;
	unsigned long long	keys[100];
	unsigned long long	n_keys;
	unsigned long long	num_entries;

	num_entries = 0;
	i = ft_atoi(number);
	n_keys = ft_write_int_to_words(i, keys);
	num_entries = 82;
	ft_parcour_key(keys, n_keys, ref, num_entries);
}

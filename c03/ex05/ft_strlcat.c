/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 01:14:14 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/10 00:35:48 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = 0;
	src_size = 0;
	while (dest[dest_size])
	{
		dest_size++;
	}
	while (src[src_size])
	{
		src_size++;
	}
	if (size < dest_size)
		return (src_size + size);
	while (dest_size + i < (size - 1) && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size] = '\0';
	return (dest_size + src_size);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	char dest1[15] = "Aohz";
	char dest2[15] = "Aohz";

	printf("ft	: %d\n", ft_strlcat(dest1, argv[1], atoi(argv[2])));
	printf("lib	: %lu\n", strlcat(dest2, argv[1], atoi(argv[2])));
}
*/

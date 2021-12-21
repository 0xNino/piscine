/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:17:16 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/17 10:17:18 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof(char *) * (len + 1));
	if (dest == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = src[len];
	return (dest);
}
/*
int main (int argc, char **argv)
{
	if (argc == 2)
	{
		char *src = argv[1];
		char *dest = ft_strdup(src);
		printf("%s\n", src);
		printf("%s\n", dest);
	}
	return (0);
}
*/
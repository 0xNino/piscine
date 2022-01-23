/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:52:20 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (i < nb && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("%s\n", ft_strncat(argv[1], argv[2], atoi(argv[3])));
}
*/

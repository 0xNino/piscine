/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 21:42:52 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*src_start;

	src_start = src;
	if (size > 1)
	{
		while (*src && size > 1)
		{
			*dest = *src;
			size--;
			src++;
			dest++;
		}
	}
	if (size >= 1)
		*dest = '\0';
	while (*src)
		src++;
	return (src - src_start);
}
/*
int	main()
{
	
	char dest[] = "bye";
	char dest2[] = "bye";
	char src[] = "salut";
	unsigned int n = 3;

	printf("%s\n", dest);
	ft_strlcpy(dest, src, n);
	strlcpy(dest2, src, n);
	printf("%s\n", dest);
	printf("%s\n", dest2);
	printf("%d\n", ft_strlcpy(dest, src, n));
}
*/

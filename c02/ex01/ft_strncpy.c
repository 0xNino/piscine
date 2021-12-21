/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:59:29 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/08 01:08:51 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char src[] = "sal";
	char dest1[] = "byecoucou";
	char dest2[] = "byecoucou";
	unsigned int n = 5;

	printf("%s\n", dest1);
	ft_strncpy(dest1, src, n);
	strncpy(dest2, src, n);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
}
*/

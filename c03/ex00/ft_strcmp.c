/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:16:07 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/10 00:42:23 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	char *s1 = "\200";
	char *s2 = "\0";
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%i\n", ft_strcmp(s1, s2));
}
*/

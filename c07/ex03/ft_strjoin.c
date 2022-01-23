/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:18:40 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*empty_string(char *str)
{
	str = malloc(sizeof(char));
	return (str);
}

int	concatlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (strs[i][j])
		{
			count = count + j + ft_strlen(sep);
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = concatlen(size, strs, sep);
	str = malloc((i + 1) * sizeof(char));
	if (size == 0)
		return (empty_string(str));
	i = 0;
	j = -1;
	k = 0;
	while (++j < size)
	{
		while (strs[j][k])
			str[i++] = strs[j][k++];
		k = 0;
		if (j + 1 < size)
		{	
			while (sep[k])
				str[i++] = sep[k++];
		}
		k = 0;
	}
	return (str);
}
/*
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	**strs;
	int		size;
	char	*sep;
	int		i;

	size = 3;
	sep = "######";
	strs = malloc(sizeof(char *) * size);
	i = 0;
	while (i < size)
	{
		strs[i] = malloc(sizeof(char) * 100);
		i++;
	}
	ft_strcpy(strs[0], "hello");
	ft_strcpy(strs[1], "coucou");
	ft_strcpy(strs[2], "salut");
	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);
}
*/

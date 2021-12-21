/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:41:21 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/07 16:59:19 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
char	*ft_strcpy(char *dest, char *src);

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
/*
int main()
{
	char destination[] = "destination";
	char source[] = "source";
	printf("%s\n", destination);
	ft_strcpy(destination, source);
	printf("%s\n", destination);
}
*/

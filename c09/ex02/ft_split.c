/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:59:52 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/23 13:59:53 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	while (str[i])
	{
		if (!(char_is_sep(str[i], charset)) && char_is_sep(str[i + 1], charset))
			words++;
		i++;
	}
	return (words);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", count_words(argv[1], argv[2]));
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:59:22 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
			continue ;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			continue ;
		}
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char alpha[] = "thisisalphabetic";
	char autres[] = "fonfsji^esfw^gr";
	printf("%d : que des catacteres alphabetiques\n", ft_str_is_alpha(alpha));
	printf("%d : autres types de caracteres\n", ft_str_is_alpha(autres));
}
*/

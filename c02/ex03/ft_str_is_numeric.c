/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:25:30 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char chiffre[] = "456298526";
	char autres[] = "cbii45rf[w4!er\\rggq]";

	printf("%d : contient que des chiffres\n", ft_str_is_numeric(chiffre));
	printf("%d : autres types de caracteres\n", ft_str_is_numeric(autres));
}
*/

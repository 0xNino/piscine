/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:37:58 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcapitalize(char *str);
char	ft_strupcase(char c);
char	ft_strlowcase(char c);
int		ft_is_alphanum(char c);
int		ft_str_is_uppercase(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str[i] = ft_strupcase(str[i]);
	i = 1;
	while (str[i])
	{
		if (ft_is_alphanum(str[i]) && !(ft_is_alphanum(str[i - 1])))
			str[i] = ft_strupcase(str[i]);
		if (ft_str_is_uppercase(str[i - 1]) || ft_is_alphanum(str[i - 1]))
			str[i] = ft_strlowcase(str[i]);
		i++;
	}
	return (str);
}

char	ft_strupcase(char c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

char	ft_strlowcase(char c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

int	ft_is_alphanum(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
/*
int	main()
{
	char str[] = "salut, commentt tu vas ? 42mots quarante-deux; cinquante+et+un\n";
	char test01[] = "#4]%5`C3#G`W!]0Q^";
	char test02[] = "Nf93S";
	char test03[] = "A#	*?M@9-PgbCbbl00]#If";
	char test04[] = "1P_7N_Z5Ofqa-O9%F";
	char test05[] = "Q$LatEos4Oe4+ 6";
	char test06[] = "*2*=^~Xa-I#%;'&(SnsxeA('1!?Mu78F?Smwj";
	char test07[] = "O/.8";
	char test08[] = "*K7$S@WalMmV3k$Mz,'	L";
	char test09[] = "1jD&#?Zf@NiT.*";
	char test10[] = "NuLl";
	printf ("%s\n", ft_strcapitalize(str));
	printf ("%s\n", ft_strcapitalize(test01));
	printf ("%s\n", ft_strcapitalize(test02));
	printf ("%s\n", ft_strcapitalize(test03));
	printf ("%s\n", ft_strcapitalize(test04));
	printf ("%s\n", ft_strcapitalize(test05));
	printf ("%s\n", ft_strcapitalize(test06));
	printf ("%s\n", ft_strcapitalize(test07));
	printf ("%s\n", ft_strcapitalize(test08));
	printf ("%s\n", ft_strcapitalize(test09));
	printf ("%s\n", ft_strcapitalize(test10));
}
*/

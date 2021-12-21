/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:27:35 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/05 10:57:50 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);
void	print_first_line(int i, int x);
void	print_border(int i, int x);
void	print_last_line(int i, int x);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (j == 1)
				print_first_line (i, x);
			else if (j == y)
				print_last_line (i, x);
			else
				print_border (i, x);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	print_first_line(int i, int x)
{
	if (i == 1)
		ft_putchar('A');
	else if (i == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	print_border(int i, int x)
{
	if (i == 1 || i == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	print_last_line(int i, int x)
{
	if (i == 1)
		ft_putchar('C');
	else if (i == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

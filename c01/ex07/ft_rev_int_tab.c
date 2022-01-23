/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:34:03 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
void ft_rev_int_tab(int *tab,int size);
void ft_print_numbers(int n);
*/
void	ft_rev_int_tab(int*tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
int main()
{
	int i = 0;
	int size = 10000000;
	int arr[size];
	int *ptr = arr;
	while (i< size)
	{
		arr[i] = i;
		++i;
	}
	ft_rev_int_tab(ptr, size);

	i=0;
	while (i<size)
	{
		printf("%d%c", arr[i], '\n');
		++i;
	}
}

void    ft_print_numbers(int n)
{
        int     nombre1;

        nombre1 = n + 48;
        write(1, &nombre1, 1);
}
*/

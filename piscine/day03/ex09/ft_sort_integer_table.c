/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 01:47:14 by chbessai          #+#    #+#             */
/*   Updated: 2018/08/30 02:09:48 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size)
	{
		if(tab[i] > tab[i+1])
				{
					temp = tab[i];
					tab[i] = tab[i+1];
					tab[i+1] = temp;
					i = 0;

				}
				else 
				i++;
	}
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
}

int		main(void)
{
	int *tab;
	int size;

	size = 4;
	tab[0] = 5;
	tab[1] = 3;
	tab[2] = 1;
	tab[3] = 4;
	ft_sort_integer_table(tab, size);
	return(0);
}

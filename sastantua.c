/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 22:59:19 by chbessai          #+#    #+#             */
/*   Updated: 2018/09/01 00:11:02 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	largeurEtage_i(int i)
{
	int largeur;
	largeurEtage_i(i - 1);
	return(largeur);
}

void	etage(int hauteur, int largeur)
{
	int i; 
	int j;

	i = 0;
	while(i < hauteur)
	{
		j = 0;
		while(j < largeur)
		{
			ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	sastantua(int size)
{
	int i;
	int hauteur;
	int largeur;

	i = 0;

	largeur = 3;
	while(i < size)
	{
		hauteur = 3 + i;
		largeur = largeurEtage_i(i);
		etage(hauteur, largeur);
		ft_putchar('\n');
		i++;
	}
}

int main(int ac, char **av)
{
	sastantua(5);
	return(0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:54:14 by chbessai          #+#    #+#             */
/*   Updated: 2018/09/06 17:45:31 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		ft_putchar(str[i]);
}

char	*ft_strdup(char *src)
{
	int i; 
	char *tab;

	i = 0;
	while (src[i])
		i++;
	tab = (char*)malloc(sizeof(*tab) * (i + 1));
	i = 0;
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
		if (src == 0)
			return (0);
	ft_putstr(tab);
}

int		main(void)
{
	ft_strdup("hello");
	return(0);
}

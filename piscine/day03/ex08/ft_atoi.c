/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 22:04:27 by chbessai          #+#    #+#             */
/*   Updated: 2018/08/30 19:15:57 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i; 
	int negativ;
	int nbr;
	i = 0;
	negativ = 1;
	nbr = 0;

	while ((str[i] == '\t' || str[i] == '\n') || (str[i] == '\r' || str[i] == '\f') ||
	(str[i] == '\v' || str[i] == ' '))
		i++;
	if (str[i] == '-')
		negativ = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++; 
	}
		return (nbr * negativ);

}

int	main(void)
{
	printf("%d", ft_atoi("-4000000000"));
	printf("%d", atoi("-4000000000"));
	return(0);
}

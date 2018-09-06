/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 03:03:43 by chbessai          #+#    #+#             */
/*   Updated: 2018/09/04 10:39:18 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int negativ;

	i = 0;
	nbr = 0;
	negativ = 1;
	while ((str[i] == '\t' || str[i] == '\n') ||
			(str[i] == '\r' || str[i] == '\f') ||
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:14:48 by chbessai          #+#    #+#             */
/*   Updated: 2018/09/04 00:56:56 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int resultat;

	resultat = 1;
	if (nb == 0)
		return (0);
	while (resultat * resultat < nb)
	{
		resultat++;
	}
	if (nb % resultat == 0 && resultat * resultat == nb)
		return (resultat);
	return (0);
}

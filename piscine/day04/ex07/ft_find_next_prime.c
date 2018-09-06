/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 20:25:20 by chbessai          #+#    #+#             */
/*   Updated: 2018/09/05 08:48:27 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb == 2)
	{
		return (2);
	}
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

int		main(void)
{
	printf("%d", ft_find_next_prime(2147483642));
	return(0);
}

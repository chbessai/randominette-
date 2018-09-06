/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 10:34:51 by chbessai          #+#    #+#             */
/*   Updated: 2018/09/05 10:40:20 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int i;
	int j;

	i = ac - 1;
	while (i < ac && i > 0)
	{
		while (av[i][j])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		i--;
		j = 0;
		ft_putchar('\n');
	}
	return (0);
}

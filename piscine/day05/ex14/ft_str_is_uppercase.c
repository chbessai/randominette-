/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 07:02:36 by chbessai          #+#    #+#             */
/*   Updated: 2018/09/04 10:04:02 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

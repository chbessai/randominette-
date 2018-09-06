/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 05:06:41 by chbessai          #+#    #+#             */
/*   Updated: 2018/09/05 05:46:11 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] = str[i + 1] - 32;
		if (str[i] >= '!' && str[i] <= '/' && str[i + 1] >= 'a'
			&& str[i] <= 'z')
			str[i + 1] = str[i + 1] - 32;
		if ((str[i] >= '{' && str[i] <= '~') ||
			(str[i] >= '[' && str[i] <= '`') || (str[i] >= 58 && str[i] <= 64))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	printf("%s", ft_strcapitalize(av[1]));
	return(0);
}

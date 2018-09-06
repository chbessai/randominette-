/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbessai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:18:05 by chbessai          #+#    #+#             */
/*   Updated: 2018/08/29 18:46:00 by chbessai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int x;
	
	i = 0;
	j = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	while(i > j)
	{
		i--;
		x = str[i];
		str[i] = str[j];
		str[j] = x;
	   	j++;	
	}
	return(str);
}

int main(void)
{
	char str[100] = "olleh";
	printf("%s", ft_strrev(str));
	return(0);
}

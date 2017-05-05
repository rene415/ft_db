/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:27:47 by exam              #+#    #+#             */
/*   Updated: 2017/05/04 02:14:09 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*rot_13(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar(str[i++] + 13);
		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar(str[i++] - 13);
		else if (str[i] >= 'A' && str[i] <= 'M')
			ft_putchar(str[i++] + 13);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar(str[i++] - 13);
		else	
			ft_putchar(str[i++]);
	}
	return (str);
}

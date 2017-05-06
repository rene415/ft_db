/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:10:22 by wfung             #+#    #+#             */
/*   Updated: 2017/05/05 18:30:15 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	set_data(int row, int col, t_store *store, char *string)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (store->next)
	{
		if (x == col - 1)
		{
			if (y == row - 1)
			{
				free(store->str);
				store->str = ft_strdup(string);
				ft_putstr("data set at ");
				ft_putstr(ft_itoa(col));
				ft_putstr(" ");
				ft_putstr(ft_iota(row));
				ft_putstr("\n");
				return ;
			}
			x = 0;
			y++;
		}
		x++;
	}
}

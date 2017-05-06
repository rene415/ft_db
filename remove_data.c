/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 17:02:56 by wfung             #+#    #+#             */
/*   Updated: 2017/05/05 18:06:54 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

static void	remove_msg(int row, int col, t_store *store)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (store == NULL)
		ft_putstr("Database does no exist\n");
	while (store->next)
	{
		if (x == col - 1)
		{
			if (y == row - 1)
			{
				if (store->str == NULL)
				{
					ft_putstr("This Cell is Empty\n");
					return ;
				}
			}
			x = 0;
			y++;
		}
		x++;
		store = store->next;
	}
}

void		remove_data(int row, int col, t_store *store)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	remove_msg(row, col, store);
	while (store->next)
	{
		if (x == col - 1)
		{
			if (y == row - 1)
			{
				if (store)
				{
					free(store->str);
					store->str = NULL;
					store->x = 0;
				}
			}
			x = 0;
			y++;
		}
		x++;
		store = store->next;
	}
}

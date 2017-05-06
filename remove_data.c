/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 17:02:56 by wfung             #+#    #+#             */
/*   Updated: 2017/05/05 17:37:10 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	remove_data(int row, int col, t_store *store)
{
	int		x;
	int		y;
	t_store	*buff;

	x = 0;
	y = 0;
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
					free(store->x);
					store->x = NULL;
				}
			}
			x = 0;
			y++;
		}
		x++;
		store = store->next;
	}
}

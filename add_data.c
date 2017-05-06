/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 17:01:35 by wfung             #+#    #+#             */
/*   Updated: 2017/05/05 17:22:13 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

t_store		*add_data(int row, int col)
{
	t_store 	*buff;

	ft_putstr("Add Data\nPlease enter the number of Columns [Limit 10]\n");
	scanf("%d", &col);
	while (col > 10 || col < 1)
	{
		ft_putstr("Invalid Entry\nPlease enter the number of Columns [Limit 10]\n");
		scanf("%d", &col);
	}
	ft_putstr("Add Data\nPlease enter the number of Rows [Limit 10]\n");
	scanf("%d", &row);
	while (row > 10 || row < 1)
	{
		ft_putstr("Invalid Entry. Please enter the number of Rows\n [Limit 10]\n");
		scanf("%d", &row);
	}
	buff = create_store(row, col);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edit_user.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 14:24:22 by wfung             #+#    #+#             */
/*   Updated: 2017/05/03 14:24:23 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		edit_user(char *choice, FILE *fp, char *user)
{
	int		i;
	int		col;
	int		row;
	t_store	*buff;

	i = 0;
	col = 0;
	row = 0;
	sleep(1);
	system("clear");
	ft_putstr("Welcome:\n    ");
	ft_putstr(user);
	ft_putstr("\n_________________\n");
	ft_putstr("[1] Add Data\n[2] Edit Data\n[3] Remove Data\n");
	ft_strclr(choice);
	scanf("%d", choice);
	while (choice != 1 && choice != 2 && choice != 3)
	{
		system("clear");
		ft_putstr("Invalid Entry. Please Select One");
		ft_putstr("[1] Add Data\n[2] Edit Data\n[3] Remove Data\n");
		scanf("%d", choice);
	}
	if (choice == 1)
	{
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
/*		while (i < num)
		{
			ft_putstr("Please enter Info for Column");
			ft_putnbr(i);
			ft_putstr("\n");
			scanf("%s", choice);
			i++;
		}
*/	print_store(buff, buff->col);
	}
	else if (num == 2)
	{
		printf("put edit data stuff here\n");
	}
	else if (num == 3)
	{
	/*	if ((remove_user()) == 1)
			ft_putstr("remove was successful\n");
		else
		{
			ft_putstr("remove was not successful\n");
			edit_data(choice, fp, user);
		}
*/	printf("put remove data stuff here\n");
	}
	fclose(fp);		//to be removed (not sure)
	return (1);
}
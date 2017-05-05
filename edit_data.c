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

int		edit_data(char *choice, FILE *fp, char *user)
{
	int		i;
	int		num;
	int		num2;
	t_store	*buff;

	i = 0;
	num = 0;
	num2 = 0;
	sleep(1);
	system("clear");
	ft_putstr("Welcome:\n    ");
	ft_putstr(user);
	ft_putstr("\n_________________\n");
	ft_putstr("[1] Add Data\n[2] Edit Data\n[3] Remove Data\n");
	ft_strclr(choice);
	scanf("%d", &num);
	while (num != 1 && num != 2 && num != 3)
	{
		system("clear");
		ft_putstr("Invalid Entry. Please Select One");
		ft_putstr("[1] Add Data\n[2] Edit Data\n[3] Remove Data\n");
		scanf("%d", &num);
	}
	if (num == 1)
	{
		ft_putstr("Add Data\nPlease enter the number of Columns [Limit 10]\n");
		scanf("%d", &num);
		while (num > 10 || num < 1)
		{
			ft_putstr("Invalid Entry\nPlease enter the number of Columns [Limit 10]\n");
			scanf("%d", &num);
		}
		ft_putstr("Add Data\nPlease enter the number of Rows [Limit 10]\n");
		scanf("%d", &num2);
		while (num2 > 10 || num2 < 1)
		{
			ft_putstr("Invalid Entry. Please enter the number of Rows\n [Limit 10]\n");
			scanf("%d", &num2);
		}
		buff = create_store(num, num2);
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
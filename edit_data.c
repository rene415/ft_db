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

	i = 0;
	num = 0;
	num2 = 0;
	sleep(1);
	system("clear");
	//printf("Welcome:\n     %s\n", user);
	ft_putstr("Welcome:\n");
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
	}
	if (num == 1)
	{
		ft_putstr("Add Data\nPlease enter the number of Columns\n");
		scanf("%d", &num);
		ft_putstr("Please enter the number of Rows\n");
		scanf("%d", &num2);
		while (i < num)
		{
			ft_putstr("Please enter Info for Column");
			ft_putnbr(i);
			ft_putstr("\n");
			scanf("%s", choice);
			i++;
		}
	}
	else if (num == 2)
		printf("there is no help.\n");
	else if (num == 3)
	{
		fclose(fp);
		system("clear");
		printf("Session ended\n");
		return (0);
	}
	fclose(fp);		//to be removed (not sure)
	return (1);
}
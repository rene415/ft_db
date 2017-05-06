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
void		message(char *user)
{
	sleep(1);
	system("clear");
	ft_putstr("Welcome:\n    ");
	ft_putstr(user);
	ft_putstr("\n_________________\n");
	ft_putstr("[1] Add Data\n[2] Edit Data\n[3] Remove Data\n");
}

int		edit_user(char *choice, FILE *fp, char *user)
{
	int		i;
	int		col;
	int		row;
	t_store	*buff;
	//char	string[10];

	i = 0;
	col = 0;
	row = 0;
	buff = NULL;
	message(user);
	ft_strclr(choice);
	scanf("%s", choice);
	while (*choice != '1' && *choice != '2' && *choice != '3')
	{
		system("clear");
		ft_putstr("Invalid Entry. Please Select One");
		ft_putstr("[1] Add Data\n[2] Edit Data\n[3] Remove Data\n");
		scanf("%s", choice);
	}
	if (*choice == '1')
	{

		fp = fopen(user, "a+");
		add_data(row, col);
/*		while (i < num)
		{
			ft_putstr("Please enter Info for Column");
			ft_putnbr(i);
			ft_putstr("\n");
			scanf("%s", choice);
			i++;
		}
		print_store(buff, buff->col);

*/
		fputs(ft_itoa(col), fp);
		fputs(ft_itoa(row), fp);
		fputs((buff->str), fp);
		fclose(fp);
	}
	else if (*choice == '2')
	{
		printf("put edit data stuff here\n");
	}
	else if (*choice == '3')
	{
		remove_data(row, col, buff);
		ft_putstr("remove was successful\n");
	}
	//edit_user(choice, fp, user);
	//free(everything!!!)
	fclose(fp);		//to be removed (not sure)
	return (1);
}
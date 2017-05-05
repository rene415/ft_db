/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 15:16:50 by rramirez          #+#    #+#             */
/*   Updated: 2017/05/04 01:49:01 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"
/*
 *	MOST RECENT FT_DB MAIN
 */

int		main(void)
{
	char	choice[3];
	char	user[60];
	FILE	*fp;

	fp = NULL;
	ft_bzero(choice, ft_strlen(choice));
	ft_bzero(user, ft_strlen(user));
	system("clear");
	ft_putstr("Database Loaded\n[1] Login\n[2] Help\n[3] Exit\n");
	scanf("%c", choice);
	if (choice_chk(&choice[0], user, fp) == 1)
	{
		if (edit_data(choice, fp, user) == 1)
		{
			printf("edit data fin\n");
		}
		
	}
	printf("main over\n");
	return (0);
}

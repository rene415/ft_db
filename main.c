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
	ft_putstr("Database Loaded\n[1] Login\n[2] Help\n[3] Exit\n");
	scanf("%c", choice);
	if (choice[0] == '1')
	{
		system("clear");
		ft_putstr("Please enter your user login\n");
		printf("start scan\n");
		scanf("%s", user);
		printf("start add_user\n");
		add_user(user, fp);
	}
	else if (choice[0] == '2')
		printf("there is no help.\n");
	else if (choice[0] == '3')
		fclose(fp);
	else
		printf("Please enter a valid selection\n");
	printf("main success almost close\n");
	fclose(fp);
	return (0);
}

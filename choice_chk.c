/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choice_chk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:39:21 by rramirez          #+#    #+#             */
/*   Updated: 2017/05/05 13:43:19 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		choice_chk(char *c, char *user, FILE *fp)
{
	
	system("clear");
	while (*c != '1' && *c != '2' && *c != '3')
	{
		system("clear");
		ft_putstr("Invalid Entry. Please Select One");
		ft_putstr("Database Loaded\n[1] Login\n[2] Help\n[3] Exit\n");
	}
	if (*c == '1')
	{
		ft_putstr("Please enter your user login\n");
		scanf("%s", user);
		check_user(user, fp);
	}
	else if (*c == '2')
		printf("there is no help.\n");
	else if (*c == '3')
	{
		fclose(fp);
		system("clear");
		printf("Session ended\n");
		return (0);
	}
	fclose(fp);		//to be removed (not)
	return (1);
}

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

void	choice_chk(char *c, char *user, FILE *fp)
{
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
	}
	fclose(fp);
}

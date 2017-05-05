/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   password.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 00:42:01 by rramirez          #+#    #+#             */
/*   Updated: 2017/05/05 00:42:30 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		pass_check2(char *pass, size_t i)
{
	int 	digitFlag;
	int		upperFlag;
	int		lowerFlag;

	lowerFlag = 0;
	upperFlag = 0;
	digitFlag = 0;
	while (i < ft_strlen(pass))
	{
		if (isdigit(pass[i++]))
			digitFlag = 1;
		if (isupper(pass[i]))
			upperFlag = 1;
		if (islower(pass[i]))
			lowerFlag = 1;
	}
	if (digitFlag == 0)
		printf("No Digit\n");
	if (upperFlag == 0)
		printf("No Upper\n");
	if (lowerFlag == 0)
		printf("No Lower\n");
 return((upperFlag == 1 && digitFlag == 1 && lowerFlag == 1) ? 1 : 0);
}

int		pass_check(char *pass)
{
	size_t	i;
	int 	lenFlag;
	
	i = 0;
	lenFlag = 1;
	if (ft_strlen(pass) < 8 || ft_strlen(pass) >15)
	{
		ft_putstr("Password did not meet criteria\n");
		lenFlag = 0;
	}
	if (lenFlag == 1 && pass_check2(pass, i) == 1)
		return(1);
	else
		return(0);
}

void	password(char *user, char *pass)
{
	FILE *userfile;

	userfile = fopen(user, "w+");
	system("clear");
	ft_putstr("Create a password\nA password must be 8-15 characters\n");
	ft_putstr("Including one uppercase letter, one lowercase letter ");
	ft_putstr("and numeric characters.\n(NO SPECIAL CHARACTERS)\n");
	scanf("%s", pass);
	system("clear");
	if(pass_check(pass) != 1)
		password(user, pass);
	fputs(pass, userfile);
	ft_putstr("User created\n");
	fclose(userfile);
}
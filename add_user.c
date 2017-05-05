/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_user.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 19:15:39 by rramirez          #+#    #+#             */
/*   Updated: 2017/05/04 02:16:03 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	password(char *user, char *pass)
{
	FILE *uf;

	uf = fopen(user, "w+");
	ft_putstr("type a password\n");
	scanf("%s", pass);
	system("clear");
	fputs(pass, uf);
	ft_putstr("User created\n");
	fclose(uf);
}

int 	add_user(char *user, FILE *fp)
{
	char *pass;

	pass = malloc(15);
	if (access(user, F_OK) == 0)
	{
		ft_putstr("type your password\n");
		scanf("%s", pass);
		while (ft_strcmp(pass, "password") != 0)
		{
			ft_putstr("Password does not match\n");
			ft_strclr(pass);
			scanf("%s", pass);
		}
		system("clear");
		ft_putstr("Login Success\n");

	}
	else
	{
		system("clear");
		ft_putstr("User not found \nPlease create one\n");
		ft_strclr(user);
		scanf("%s", user);
		fp = fopen(user, "w+");
		fclose(fp);
		password(user, pass);
		fputs(user, fp);
	}
	sleep(1);
	system("clear");
	printf("Welcome:\n     %s\n", user);
	ft_putstr("_________________\n");
	ft_putstr("[1] Add Data\n[2] Edit Data\n[3] Remove Data\n");
	return (1);
}

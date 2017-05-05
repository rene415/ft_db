/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_user.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 19:15:39 by rramirez          #+#    #+#             */
/*   Updated: 2017/05/04 02:16:03 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	add_user(char *user, FILE *fp, char *pass)
{
	ft_strclr(user);
	scanf("%s", user);
	if (access(user, F_OK) == 0)
	{
		ft_putstr("user already exists please try a different one\n");
		add_user(user, fp, pass);
		sleep(1);
		system("clear");
	}
	fclose(fp);
	password(user, pass);
}

void	valid_usr(char *user, char *pass)
{
	char	*hey;
	FILE 	*usrFile;
	
	usrFile = fopen (user, "r");
	printf("User Found. Please enter your password.\n");
	get_next_line(fileno(usrFile), &hey);
	printf("hey = %s\n", hey);
	ft_putstr("type your password\n");
	scanf("%s", pass);
	while (ft_strcmp(pass, hey) != 0)
	{
		ft_putstr("Password does not match\n");
		ft_strclr(pass);
		scanf("%s", pass);
	}
	system("clear");
	ft_putstr("Login Success\n");
}

int 	check_user(char *user, FILE *fp)
{
	char		pass[16];
	int			size;

	printf("at add user\n");
	fp = fopen (user, "a+");
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fclose(fp);
	if (size > 0)
	{
		valid_usr(user, pass);
	}
	else
	{
		remove(user);
		system("clear");
		ft_putstr("User not found \nPlease create one\n");
		add_user(user, fp, pass);
		fputs(user, fp);
	}
	sleep(1);
	system("clear");
	printf("Welcome:\n     %s\n", user);
	ft_putstr("_________________\n");
	ft_putstr("[1] Add Data\n[2] Edit Data\n[3] Remove Data\n");
	return (1);
}

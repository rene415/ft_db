/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_db.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 03:25:34 by rramirez          #+#    #+#             */
/*   Updated: 2017/05/04 19:09:42 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_DB_H__
# define __FT_DB_H__

# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "./libft/libft.h"

typedef	struct		s_store
{
	char			*str;
	char			**array;
	struct s_store	*next;
}					t_store;

int			user_len_chk(char *str);
int			check_user(char *user, FILE *fp);
int			edit_user(char *user, FILE *fp);
int			remove_user(char *user, FILE *fp);
char		*rot_13(char *str);
t_store		*read_file(FILE *fp, char *user);
void		print_struct(t_store *x);
void		free_read(t_store *x);
void		password(char *user, char *pass);
int			pass_check(char *pass);
int			pass_check2(char *pass, size_t i, int digitFlag, int upperFlag, int lowerFlag);
void	if_statements(int digitFlag, int upperFlag ,int lowerFlag);

#endif

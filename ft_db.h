/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_db.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 03:25:34 by rramirez          #+#    #+#             */
/*   Updated: 2017/05/04 17:56:30 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_DB_H__
# define __FT_DB_H__

# include <unistd.h>
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

int		user_len_chk(char *str);
int		add_user(char *user, FILE *fp);
int		edit_user(char *user, FILE *fp);
int		remove_user(char *user, FILE *fp);
char	*rot_13(char *str);

#endif

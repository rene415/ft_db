/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_db.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 17:17:03 by wfung             #+#    #+#             */
/*   Updated: 2017/05/03 17:27:59 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		ft_db()
{
	char	choice[2];
	FILE	*fp;

	scanf("%c", choice);
	fp = fopen(".users", "w+");
	if (choice[0] == '1' || ft_strcmp(choice, "Login") == 0)
	{
		scanf("%s", user);
		add_user(user, fp);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 20:30:36 by wfung             #+#    #+#             */
/*   Updated: 2017/05/04 17:58:19 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	print_struct(t_store *x)
{
	while (x)
	{
		printf("%s\n", x->str);
		x = x->next;
	}
}

int		read_file(char *user)
{
	char		*line;
	t_store		*save;
	t_store		*head;
	int			fd;

	if (!(save = (t_store*)malloc(sizeof(t_store))))
		return (0);
	head = save;
	save->next = NULL;
	fd = open(user, O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		if (save == NULL)
		{
			if (!(save = (t_store*)malloc(sizeof(t_store))))
				return (0);
			save->next = NULL;
		}
		save->str = ft_strdup(line);
		free(line);
		save = save->next;
	}
	close(fd);
	return (1);
}

void	free_read(t_store *x)
{
	t_store	*curr;

	while (x)
	{
		curr = x;
		x = x->next;
		free(curr);
		curr = NULL;
	}
}

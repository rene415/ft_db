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

void	print_struct(t_store *x)	//prints read_file results FOR TESTING
{
	while (x)
	{
		printf("%s\n", x->str);
		x = x->next;
	}
	printf("finished printing all read_file results\n");
}

t_store		*read_file(FILE *fp, char *user, char *pass, int n)
{
	t_store		*head;
	t_store		*save;
	char		buff[10];

	if (!(save = (t_store*)malloc(sizeof(t_store))))
		return (0);
	head = save;
	save->next = NULL;
	fp = fopen(user, "r");
	printf("read_file start fread\n");
	fread(buff, ft_strlen(pass) + 1, n, fp);
	printf("buff = %s\n", buff);
	printf("read_file end fread\n");
	save->str = ft_strdup(buff);
	printf("read_file success\n");
	fclose(fp);
	return (head);
}

void	free_read(t_store *x)	//frees result elements of read_file
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

/*
t_store		*read_file(void)			//char *user)
{
	char		*line;
	t_store		*save;
	t_store		*head;
	int			fd;

	if (!(save = (t_store*)malloc(sizeof(t_store))))
		return (0);
	head = save;
	save->next = NULL;
	printf("read_file open user\n");
	fd = 0;								//fopen(fp, O_RDONLY);
	printf("success start GNL");
	while (get_next_line(fd, &line) == 1)
	{
		if (save == NULL)
		{
			if (!(save = (t_store*)malloc(sizeof(t_store))))
				return (NULL);
			save->next = NULL;
		}
		if (ft_strcmp(save->str, line) != 0)	//to make sure its not overwritten
			save->str = ft_strdup(line);
		free(line);
		save = save->next;
	}
	close(fd);
	return (head);
}
*/
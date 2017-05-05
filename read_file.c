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


t_store		*read_file(FILE *fp, char *user)			//char *user)
{
	char		*line;
	t_store		*save;
	t_store		*head;

	head = NULL;

	printf("Start of read\n");
	if (!(head = (t_store*)malloc(sizeof(t_store))))
		return (0);
	save = head;
	save->next = NULL;
	printf("read_file open user, %s\n", user);
	// printf("success start GNL\n");
	save->str = NULL;
	while (get_next_line(fileno(fp), &line) == 1)
	while (get_next_line(fileno(fp), &line))
	{
		printf("%s\n", line);
	
		//to make sure its not overwritten
		//save->str = ft_strdup(line);
		//free(line);
		//if (!(save->next = (t_store*)malloc(sizeof(t_store))))
		//	return (NULL);
		//save = save->next;
	}
	//save->next = NULL;
	return (head);
}

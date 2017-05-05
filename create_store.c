/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_store.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:12:22 by wfung             #+#    #+#             */
/*   Updated: 2017/05/05 15:12:27 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void		free_store(t_store *store)
{
	int		i;

	i = 0;
	t_store *current;
	current = store;
	while (current->next)
	{
		printf("at store [%i]\n", current->x);
		current = current->next;
		free(store);
		store = current;
		printf("freed %i\n", i);
		i++;
	}
}

void		print_store(t_store *store, int max)
{
	int		i;

	i = 0;
	t_store	*current;
	current = store;
	while (current->next)
	{
	//	printf("//store [%i] [%i]\n", i, current->x);
		printf("[%i]", current->x);
		if (i == max - 1)
		{
			printf("\n");
			i = -1;
		}
		current = current->next;
		i++;
	//	printf("/store [%i] [%i]\n", i, store->x);
	}
	printf("\n");
}

t_store		*create_store(int row, int col)
{
	int			i;
	int			total;
	t_store		*store;
	t_store		*head;

	i = 0;
	total = row * col;
	if (!(store = (t_store*)malloc(sizeof(t_store) * (1))))
		return (NULL);
	store->next = NULL;
	head = store;
	while (i < total)
	{
		if (!(store->next = (t_store*)malloc(sizeof(t_store) * (1))))
			return (NULL);
		store->x = i;
	//	printf("store->x i %i [%i]\n", i, store->x);
	//	printf("db i = [%i]\n", i);
		i++;
		store = store->next;
	}
	store->next = NULL;
	head->row = row;
	head->col = col;
	return (head);
}

// int		main(void)
// {
// 	int		x = 5;
// 	int		y = 5;
// 	t_store	*hey;
// 	hey = ft_db(x, y);
// 	print_store(hey);
// 	free_store(hey);
// 	return (0);
// }

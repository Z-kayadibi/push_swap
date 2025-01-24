/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:02:19 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/24 21:57:55 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "push_swap.h"

int main(int ac, char **av)
{
	int 	i = 1;
	t_list	*list;

	list = NULL;
	error(av, ac);
	// printf("%p = > %p\n", &list, list);

	while (i < ac)
		ft_lstadd_back(&list, ft_lstnew(ft_atoi(av[i++])));

	t_list *tmp = list;

	while (tmp != NULL)
	{
		// printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&list, free);
	return (0);
}
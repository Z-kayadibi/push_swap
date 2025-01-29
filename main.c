/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:02:19 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/29 16:54:10 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "push_swap.h"

int main(int ac, char **av)
{
	int 	i = 1;
	t_list	*a;
	t_list *b;

	a = NULL;
	b = NULL;
	error(av, ac);
	printf("%p = > %p\n", &a, a);

	while (i < ac)
		lib_lstadd_back(&a, ft_lstnew(ft_atoi(av[i++])));

	t_list *tmp = a;
	printf("a: %p\n", a);
	printf("tmp: %p\n", tmp);
	while (tmp != NULL)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&a, free);
	return (0);
}

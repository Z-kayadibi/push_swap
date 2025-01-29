/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:02:19 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/29 22:12:29 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "push_swap.h"

// void *max(t_list **stack);

int main(int ac, char **av)
{
	int 	i = 1;
	t_list	*a;
	t_list *b;
	t_list *maxx;

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
	maxx = max(&a);
	printf("max: %d", maxx->content);
	ft_lstclear(&a, free);
	return (0);
}
/* 
void *max(t_list **stack)
{
	int i;

	i = 0;
	t_list *max;
	if (!*stack || !stack)
		return (NULL);
	max = *stack;
	while ((*stack)->next)
	{
		printf("deneme\n");
		if((*stack)->content > (*stack)->next->content)
			max = *stack;
		*stack = (*stack)->next;
	}
	if (((*stack)->content) > max->content)
		max = *stack;
	return(max);
}
 */
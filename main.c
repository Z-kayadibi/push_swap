/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:02:19 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/30 23:57:06 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "push_swap.h"

int main(int ac, char **av)
{
	int 	i = 1;
	t_list	*a;
	t_list *b;
	t_list *max;
	t_list *min;

	a = NULL;
	b = NULL;
	error(av, ac);
	while (i < ac)
		lib_lstadd_back(&a, ft_lstnew(ft_atoi(av[i++])));

	t_list *tmp = a;
    /*while (tmp != NULL)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	} */
	max = max_content(&a);
	printf("max: %d\n", max->content);
	min = min_content(&a);
	printf("min: %d\n", min->content);
	ft_lstclear(&a, free);
	return (0);
}

t_list *max_content(t_list **stack)
{
	int i;
	t_list *max;
	t_list *tmp;
	
	i = 0;
	tmp = *stack;
	if (!*stack || !stack)
		return (NULL);
	max = *stack;
	while ((tmp))
	{
		if((tmp)->content > max->content)
			max = tmp;
		tmp = (tmp)->next;
	}
	printf("fonk-max: %d\n", max->content);
	return(max);
}

t_list *min_content(t_list **stack)
{
	int i;
	t_list *min;
	t_list *tmp;
	
	i = 0;
	tmp = *stack;
	if (!*stack || !stack)
		return (NULL);
	min = *stack;
	while ((tmp))
	{
		if((tmp)->content < min->content)
			min = tmp;
		tmp = (tmp)->next;
	}
	printf("fonk-min: %d\n", min->content);
	return(min);
}

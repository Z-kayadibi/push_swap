/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:23:59 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/29 20:31:20 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_list **point_a)
{
	t_list	*tmp;
	t_list	*second_tmp;

	tmp = *point_a;
	second_tmp = (*point_a)->next->next;
	(*point_a) = (*point_a)->next;
	(*point_a)->next = tmp;
	(*point_a)->next->next = second_tmp;
}

void sb(t_list **point_b)
{
	t_list	*tmp;
	t_list	*second_tmp;

	tmp = *point_b;
	second_tmp = (*point_b)->next->next;
	(*point_b) = (*point_b)->next;
	(*point_b)->next = tmp;
	(*point_b)->next->next = second_tmp;
}

void pb(t_list **a, t_list **b)
{
	t_list *tmp;

	tmp = (*a)->next;
	(*a)->next = *b;
	*b = (*a);
	*a = tmp;
}

void pa(t_list **a, t_list **b)
{
	t_list *tmp;

	tmp = (*b)->next;
	(*b)->next = *a;
	*a = (*b);
	*b = tmp;
}

// int main ()
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *c;
	
// 	a = ft_lstnew(1);
// 	b = ft_lstnew(2);
// 	c = ft_lstnew(3);
// 	a->next = b;
// 	a->next->next = c;
// 	t_list *d;
// 	t_list *e;
// 	t_list *f;
	
// 	d = ft_lstnew(4);
// 	e = ft_lstnew(5);
// 	f = ft_lstnew(6);
// 	d->next = e;
// 	d->next->next = f;
// 	// printf("%d\n", a->content);
// 	// printf("%d\n", a->next->content);
// 	// printf("%d\n", a->next->next->content);
// 	rrb(&d);
// 	printf("%d\n", d->content);
// 	printf("%d\n", d->next->content);
// 	printf("%d\n", d->next->next->content);
// 	printf("%p\n", d->next->next->next);
// 	// printf("%d\n", d->content);
// 	// printf("%d\n", d->next->content);

// 	ft_lstclear(&a, free);
// 	ft_lstclear(&d, free);
	
// }
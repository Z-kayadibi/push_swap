/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_with_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:30:17 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/29 20:33:31 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_list **a)
{
	ft_lstadd_back(a, *a);
}

void rb(t_list **b)
{
	ft_lstadd_back(b, *b);
}

void rra(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = (*a);

	while (tmp->next->next)
		tmp = tmp->next;
	
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = *a;
	*a = tmp2;
}

void rrb(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = (*b);

	while (tmp->next->next)
		tmp = tmp->next;
	
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = *b;
	*b = tmp2;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;
	t_list *tmp2;
	
	if (!new || !lst)
		return ;
	if (!*lst)
		(*lst) = new;
	tmp = *lst;
	tmp2 = tmp->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->next = NULL;
	*lst = tmp2;
}
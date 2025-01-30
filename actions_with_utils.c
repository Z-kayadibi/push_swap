/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_with_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:30:17 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/30 23:37:54 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_list **a, int flag)
{
	ft_lstadd_back(a, *a);
	if (flag == 1)
		write(1, "rr\n", 2);
	else
		write(1, "ra\n", 2);
}

void rb(t_list **b, int flag)
{
	ft_lstadd_back(b, *b);
	if (flag == 1)
		return ;
	write(1, "rb\n", 2);
}

void rra(t_list **a, int flag)
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
	if (flag == 1)
		write(1, "rrr\n", 2);
	else
		write(1, "rra\n", 2);
}

void rrb(t_list **b, int flag)
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
	if (flag == 1)
		return ;
	write(1, "rrb\n", 2);
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
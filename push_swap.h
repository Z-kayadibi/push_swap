/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:10:07 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/29 16:54:00 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdlib.h>
#include <unistd.h>
#include "stdio.h"

typedef struct s_list
{
	int content;
	struct s_list *next;
}	t_list;

//LIST OPERATIONS
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstclear(t_list **lst, void (*del)(void*));

void	lib_lstadd_back(t_list **lst, t_list *new);
void		error(char *argv[], int argc);
long int	ft_atoi(char *str);
char		*ft_strchr(char *s, int c);
int			number_ctrl(char **argv, int argc);
int			ft_isdigit(char *c);

#endif
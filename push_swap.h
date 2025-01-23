/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:10:07 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/23 20:17:29 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdlib.h>
#include <unistd.h>

void		error(char *argv[], int argc);
long int	ft_atoi(char *str);
char		*ft_strchr(char *s, int c);
int			number_ctrl(char **argv, int argc);
int			ft_isdigit(char *c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:09:00 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/23 20:28:08 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	error(char *argv[], int argc)
{
	int			i;
	long int	number;

	i = 1;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]) || (ft_strchr(argv[i], '.')) != NULL
			|| !(number_ctrl(argv, argc)))
		{
			write(1, "Error\n", 6);
			return ;
		}
		number = ft_atoi(argv[i]);
		// printf("-(%ld)-\n", number);
		if (number > 2147483647)
		{
			write(1, "Error\n", 6);
			return ;
		}
		i++;
	}
}

int	ft_isdigit(char *c)
{
	int	i;

	i = -1;
	while (c[++i])
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (0);
	return (1);
}

long int	ft_atoi(char *str)
{
	int			i;
	long int	size;
	long int	result;

	i = 0;
	size = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			size = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (size * result);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}

int	number_ctrl(char **argv, int argc)
{
	int	i;
	int	j;
	int	number2;
	int	number;

	i = 1;
	j = 2;
	while (argv[i])
	{
		number = ft_atoi(argv[i]);
		while (argv[j])
		{
			if (argc > i + 1)
				number2 = ft_atoi(argv[j]);
			else
				break ;
			if (number == number2)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:02:19 by zkayadib          #+#    #+#             */
/*   Updated: 2025/01/22 21:26:38 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "stdio.h"
void error(char *argv[]);
long int	ft_atoi(char *str);
char	*ft_strchr(char *s, int c);

int main (int argc, char *argv[])
{
	if (argc < 1)
		return (0);
	error(argv);
}

void error(char *argv[])
{
	int i;
	long int number;

	i = 1;
	while (argv[i])
	{
		if ((ft_strchr(argv[i], '.')) != NULL)
		{
			write(1, "Error\n", 6);
			return;
		}
		number = ft_atoi(argv[i]);
		printf("-(%ld)-\n", number);
		if (number > 2147483647)
		{
			write(1, "Error\n", 6);
			return;
		}
		// if (numberctrl)
		// {
		// 	write(1, "Error\n", 6);
		// 	return;
		// }
		i ++;
	}
}

long int ft_atoi(char *str)
{
	int	i;
	long int	size;
	long int	result;

	i = 0;
	size = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i ++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			size = -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i ++;
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
		i ++;
	}
	return ((char *)(s + i));
}

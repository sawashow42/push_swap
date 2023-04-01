/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:28:35 by shsawaki          #+#    #+#             */
/*   Updated: 2023/03/28 22:43:37 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

static int	check_num(char *argv)
{
	int	j;

	j = 0;
	if (argv[j] == '-' || argv[j] == '+')
		j++;
	while (argv[j])
	{
		if (!ft_isdigit(argv[j]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		j++;
	}
	return (ft_atoi(argv));
}

int	arg_check(int argc, char **argv)
{
	int	i;
	int	l;
	int	num;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		num = check_num(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			exit (1);
		l = i + 1;
		while (l < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[l]))
				return (1);
			l++;
		}
		i++;
	}
	return (0);
}

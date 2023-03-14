/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:28:35 by shsawaki          #+#    #+#             */
/*   Updated: 2023/03/14 22:28:05 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

static int	check_num(char *argv)
{
	int	j;
	int	num;
	int	sign;

	j = 0;
	num = 0;
	sign = 1;
	if (argv[j] != '\0' && (argv[j] == '-' || argv[j] == '+'))
	{
		if (argv[j] == '-')
			sign *= -1;
		j++;
	}
	while (argv[j] != '\0')
	{
		if (!ft_isdigit(argv[j]))
			exit (1);
		if (check_over_long(num, sign, argv[j]) && sign == 1)
			exit (1);
		if (check_over_long(num, sign, argv[j]) && sign == -1)
			exit (1);
		num = num * 10 + argv[j] - '0';
		j++;
	}
	return (num * sign);
}

int	arg_check(int argc, char **argv)
{
	int	i;
	int	l;
	int	num;

	if (argc < 2)
		exit(1);
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
				exit (1);
			l++;
		}
		i++;
	}
	return (0);
}

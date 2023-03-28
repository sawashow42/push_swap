/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:27:20 by shsawaki          #+#    #+#             */
/*   Updated: 2023/03/28 22:48:51 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char s)
{
	if (s == ' ' || s == '\t' || s == '\n' || s == '\v' || s == '\f'
		|| s == '\r')
		return (1);
	return (0);
}

int	process_digit(int num, int digit, int sign)
{
	if (sign == 1)
	{
		if (num > (INT_MAX - digit) / 10)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		num = num * 10 + digit;
	}
	else
	{
		if (num < (INT_MIN + digit) / 10)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		num = num * 10 + digit;
	}
	return (num);
}

int	calculate_num(const char *str, int *i, int sign)
{
	int	num;
	int	digit;

	num = 0;
	while (str[*i] && ft_isdigit(str[*i]))
	{
		digit = str[*i] - '0';
		num = process_digit(num, digit, sign);
		(*i)++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	num = calculate_num(str, &i, sign);
	return (num * sign);
}

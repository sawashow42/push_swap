/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:06:48 by shsawaki          #+#    #+#             */
/*   Updated: 2023/01/19 00:47:16 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	init_stack(t_stack **stack, char **argv)
{
	int		i;
	t_stack	*new;

	i = 1;
	while (argv[i])
	{
		new = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	return ;
}

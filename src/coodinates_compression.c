/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coodinates_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 01:09:24 by shsawaki          #+#    #+#             */
/*   Updated: 2023/01/19 00:47:49 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	coordinate_comp(t_stack *stack)
{
	size_t	index;
	size_t	lst_len;
	t_stack	*min;
	t_stack	*tmp;

	index = 0;
	lst_len = ft_lstsize(stack);
	while (index < lst_len)
	{
		tmp = stack;
		min = NULL;
		while (tmp)
		{
			if (tmp->index == -1 && (!min || tmp->data < min->data))
				min = tmp;
			tmp = tmp->next;
		}
		if (min)
			min->index = index;
		index++;
	}
}

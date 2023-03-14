/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:44:26 by shsawaki          #+#    #+#             */
/*   Updated: 2023/01/19 01:08:33 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*next;

	tmp = stack;
	while (tmp->next)
	{
		next = tmp->next;
		if (tmp->index > next->index)
			return (1);
		tmp = next;
	}
	return (0);
}

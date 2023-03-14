/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:56:42 by shsawaki          #+#    #+#             */
/*   Updated: 2023/03/04 11:09:21 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*head;

	if (!(*stack_b))
		return ;
	head = *stack_b;
	*stack_b = (*stack_b)->next;
	head->next = *stack_a;
	*stack_a = head;
	write(1, "pa\n", 3);
	return ;
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*head;

	if (!(*stack_a))
		return ;
	head = *stack_a;
	*stack_a = (*stack_a)->next;
	head->next = *stack_b;
	*stack_b = head;
	write(1, "pb\n", 3);
	return ;
}

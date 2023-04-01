/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:55:51 by shsawaki          #+#    #+#             */
/*   Updated: 2023/03/28 22:47:48 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort3(t_stack **stack_a)
{
	while (is_sorted(*stack_a))
	{
		if ((*stack_a)->index < (*stack_a)->next->next->index)
			sa(stack_a);
		else
			ra(stack_a);
	}
	return ;
}

void	sort5(t_stack **stack_a, t_stack **stack_b, size_t lstsize)
{
	int	len;

	len = (int)lstsize;
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->index < len - 3)
			pb(stack_a, stack_b);
		else if (((*stack_a)->next->index < len - 3)
			|| ((*stack_a)->next->next->index < len - 3))
			ra(stack_a);
		else
			rra(stack_a);
	}
	sort3(stack_a);
	if (!is_sorted(*stack_b) && len == 5)
		sb(stack_b);
	while (len - 3)
	{
		pa(stack_a, stack_b);
		len--;
	}
	return ;
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	size_t	lstsize;

	lstsize = ft_lstsize(*stack_a);
	if (lstsize == 2)
		sa(stack_a);
	else if (lstsize == 3)
		sort3(stack_a);
	else if (lstsize <= 5)
		sort5(stack_a, stack_b, lstsize);
	else
		radix_sort(stack_a, stack_b, lstsize);
	return ;
}

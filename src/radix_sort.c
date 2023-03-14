/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:03:44 by shsawaki          #+#    #+#             */
/*   Updated: 2023/03/14 22:26:50 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_max_bits(t_stack **stack)
{
	int		count;
	int		max_index;
	t_stack	*tmp;

	count = 0;
	max_index = -1;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->index > max_index)
			max_index = tmp->index;
		tmp = tmp->next;
	}
	while ((max_index >> count) > 0)
		count++;
	return (count);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b, size_t lstsize)
{
	int		i;
	size_t	j;
	int		max_bits;
	t_stack	*tmp;

	i = 0;
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		if (!is_sorted(*stack_a))
			break ;
		j = 0;
		while (j++ < lstsize)
		{
			tmp = *stack_a;
			if ((tmp->index >> i) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
	return ;
}

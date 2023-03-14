/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:49:05 by shsawaki          #+#    #+#             */
/*   Updated: 2023/03/14 22:21:30 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (0);
	arg_check(argc, argv);
	stack_a = NULL;
	init_stack(&stack_a, argc, argv);
	stack_b = NULL;
	coordinate_comp(stack_a);
	if (is_sorted(stack_a))
		sort(&stack_a, &stack_b);
	return (0);
}

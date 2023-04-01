/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:49:05 by shsawaki          #+#    #+#             */
/*   Updated: 2023/03/28 22:45:34 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	print_lst(t_stack *lst)
// {
// 	while (42)
// 	{
// 		if (!lst)
// 			break ;
// 		printf("value\t%d\n", (lst)->data);
// 		printf("order\t%d\n", (lst)->index);
// 		printf("now\t%p\n", (lst));
// 		printf("next\t%p\n", (lst)->next);
// 		printf("----------------\n");
// 		lst = (lst)->next;
// 	}
// 	printf("=============================\n");
// }

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (0);
	if (arg_check(argc, argv))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	stack_a = NULL;
	init_stack(&stack_a, argv);
	stack_b = NULL;
	coordinate_comp(stack_a);
	if (is_sorted(stack_a))
		sort(&stack_a, &stack_b);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:34:04 by shsawaki          #+#    #+#             */
/*   Updated: 2023/03/14 22:18:06 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// # include <libc.h>
// # include <limits.h>
// # include <stdlib.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				index;
}	t_stack;

//list
t_stack	*ft_lstnew(int num);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
size_t	ft_lstsize(t_stack *lst);
t_stack	*ft_lstfirst(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstdelone(t_stack *lst, void (*del)(int));
void	ft_lstclear(t_stack **lst, void (*del)(int));
void	ft_lstiter(t_stack *lst, void (*f)(int));
t_stack	*ft_lstmap(t_stack *lst, int (*f)(int), void (*del)(int));

//arg_check
int		arg_check(int argc, char **argv);

//stack
void	init_stack(t_stack **stack, int argc, char **argv);
void	coordinate_comp(t_stack *stack);
int		is_sorted(t_stack *stack);

//stack operations
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

//sort
void	sort(t_stack **stack_a, t_stack **stack_b);
void	radix_sort(t_stack **stack_a, t_stack **stack_b, size_t lstsize);

#endif
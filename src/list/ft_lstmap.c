/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 22:40:17 by shsawaki          #+#    #+#             */
/*   Updated: 2023/01/19 00:38:19 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_lstmap(t_stack *lst, int (*f)(int), void (*del)(int))
{
	t_stack	*new_lst;
	t_stack	*new_num;

	if (!lst || !f || !del)
		return (NULL);
	new_num = ft_lstnew(f(lst->data));
	if (!new_num)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = new_num;
	lst = lst->next;
	while (lst)
	{
		new_num = ft_lstnew(f(lst->data));
		if (!new_num)
		{
			ft_lstclear(&new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_num);
	}
	return (new_lst);
}

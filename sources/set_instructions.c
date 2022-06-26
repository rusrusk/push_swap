/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:32:16 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:51:58 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to(t_num **stack_a, t_num **stack_b)
{
	t_num	*tmp;
	t_num	*head_to;
	t_num	*head_from;

	if (lst_lstsize(*stack_a) == 0)
		return ;
	head_to = *stack_b;
	head_from = *stack_a;
	tmp = head_from;
	head_from = head_from->next;
	*stack_a = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_b = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_b = tmp;
	}
}

void	ft_reverse_rotate(t_num **mystack)
{
	t_num	*last;
	t_num	*tt;

	if (*mystack != NULL && lst_lstsize(*mystack) != 1)
	{
		tt = *mystack;
		last = lst_lstlast(tt);
		while (tt)
		{
			if (!tt->next->next)
			{
				tt->next = NULL;
				break ;
			}
			tt = tt->next;
		}
		last -> next = *mystack;
		*mystack = last;
	}
}

void	ft_rotate(t_num **mystack)
{
	t_num	*last;
	t_num	*head;

	if (*mystack != NULL && lst_lstsize(*mystack) != 1)
	{
		head = *mystack;
		last = lst_lstlast(*mystack);
		*mystack = head->next;
		head->next = NULL;
		last->next = head;
	}
}

void	ft_swap(t_num **mystack)
{
	int	temp;

	if (*mystack != NULL && lst_lstsize(*mystack) != 1)
	{
		temp = (*mystack)->value;
		(*mystack)->value = (*mystack)->next->value;
		(*mystack)->next->value = temp;
	}
}

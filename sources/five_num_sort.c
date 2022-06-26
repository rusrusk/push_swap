/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_num_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:26:38 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:39:42 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	best_five_move(t_num **stack_a, int i, int lstsize)
{
	if (i == lstsize)
	{
		run_operations(stack_a, NULL, "rra");
	}
	else if (i == (lstsize - 1))
	{
		run_operations(stack_a, NULL, "rra");
		run_operations(stack_a, NULL, "rra");
	}
	else if (i == (lstsize - 2))
	{
		run_operations(stack_a, NULL, "ra");
		run_operations(stack_a, NULL, "ra");
	}
	else if (i == (lstsize - 3))
	{
		run_operations(stack_a, NULL, "ra");
	}
}

void	sort_number_five(t_num **stack_a, t_num **stack_b)
{
	int		i;
	int		min;
	int		lstsize;
	t_num	*tmp;

	i = 1;
	tmp = *stack_a;
	min = find_min(*stack_a);
	lstsize = lst_lstsize(*stack_a);
	while (tmp)
	{
		if (tmp->value == min)
		{
			break ;
		}
	i++;
	tmp = tmp->next;
	}
	best_five_move(stack_a, i, lstsize);
	run_operations(stack_a, stack_b, "pb");
	sort_number_four(stack_a, stack_b);
	run_operations(stack_a, stack_b, "pa");
}

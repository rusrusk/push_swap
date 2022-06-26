/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_num_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:01:45 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:09:34 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_number_three(t_num **stack_a, t_num **stack_b)
{
	int	two;
	int	three;

	two = ((*stack_a)->next->value);
	three = ((*stack_a)->next->next->value);
	if ((*stack_a)->value > two && (*stack_a)->value < three && two < three)
		run_operations(stack_a, NULL, "sa");
	if ((*stack_a)->value > two && two > three && (*stack_a)->value > three)
	{
		run_operations(stack_a, NULL, "sa");
		run_operations(stack_a, NULL, "rra");
	}
	if ((*stack_a)->value > two && (*stack_a)->value > three && two < three)
		run_operations(stack_a, NULL, "ra");
	if ((*stack_a)->value < two && (*stack_a)->value < three && two > three)
	{
		run_operations(stack_a, NULL, "sa");
		run_operations(stack_a, NULL, "ra");
	}
	if ((*stack_a)->value < two && ((*stack_a)->value > three && two > three))
		run_operations(stack_a, NULL, "rra");
}

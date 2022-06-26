/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_num_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 23:16:38 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:40:10 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_number_two(t_num	**stack_a, t_num **stack_b)
{
	t_num	*head;
	int		i;
	int		j;

	head = *stack_a;
	if (head->value > head->next->value)
	{
		run_operations(stack_a, NULL, "sa");
	}
}

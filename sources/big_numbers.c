/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:56:01 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:18:05 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max_bits(t_num *stack)
{
	t_num	*head;
	int		max_nb;
	int		max_bits;
	int		lstsize;

	head = stack;
	lstsize = lst_lstsize(head);
	max_nb = lstsize;
	max_bits = 0;
	while ((max_nb >> max_bits) != 0)
	{
		max_bits++;
	}
	return (max_bits);
}

void	radix_sort(t_num **stack_a, t_num **stack_b)
{
	t_num	*head;
	int		i;
	int		j;
	int		max_bits;
	int		lstsize;

	i = 0;
	index_stack(stack_a);
	lstsize = lst_lstsize(*stack_a);
	while (i < get_max_bits(*stack_a))
	{
		j = 0;
		while (j++ < lstsize)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				run_operations(stack_a, NULL, "ra");
			else
				run_operations(stack_a, stack_b, "pb");
		}
		while (lst_lstsize(*stack_b) != 0)
			run_operations(stack_a, stack_b, "pa");
	i++;
	}
}

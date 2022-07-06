/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:59:32 by rkultaev          #+#    #+#             */
/*   Updated: 2022/07/05 23:54:05 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_operations(char *str)
{
	if (!ft_strcmp(str, "pa") || !ft_strcmp(str, "pb"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "sa") || !ft_strcmp(str, "sb"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "ss"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "ra") || !ft_strcmp(str, "rb"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "rr"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "rra") || !ft_strcmp(str, "rrb"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "rrr"))
		write(1, str, ft_sizeof(str));
}

void	run_operations(t_num **stack_a, t_num **stack_b, char *str)
{
	print_operations(str);
	write(1, "\n", 1);
	if (!ft_strcmp(str, "pa"))
		push_to(stack_b, stack_a);
	if (!ft_strcmp(str, "pb"))
		push_to(stack_a, stack_b);
	if (!ft_strcmp(str, "sa") || !ft_strcmp(str, "ss"))
		ft_swap(stack_a);
	if (!ft_strcmp(str, "sb") || !ft_strcmp(str, "ss"))
		ft_swap(stack_b);
	if (!ft_strcmp(str, "ra") || !ft_strcmp(str, "rr"))
		ft_rotate(stack_a);
	if (!ft_strcmp(str, "rb") || !ft_strcmp(str, "rr"))
		ft_rotate(stack_b);
	if (!ft_strcmp(str, "rra") || !ft_strcmp(str, "rrr"))
		ft_reverse_rotate(stack_a);
	if (!ft_strcmp(str, "rrb") || !ft_strcmp(str, "rrr"))
		ft_reverse_rotate(stack_b);
}

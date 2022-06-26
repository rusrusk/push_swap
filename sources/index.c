/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:50:41 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 10:54:24 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	*sorted_stack(long long *stack, int size)
{
	int			i;
	int			j;
	long long	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack[i] - stack[j] > 0)
			{
				tmp = stack[i];
				stack[i] = stack[j];
				stack[j] = tmp;
			}
		j++;
		}
	i++;
	}
	return (stack);
}

long long	*ft_stack(t_num *stack)
{
	int			lstsize;
	t_num		*head;
	int			i;
	long long	*table;

	lstsize = lst_lstsize(stack);
	table = (long long *)malloc(sizeof(long long) * lstsize);
	if (!table)
		return (NULL);
	head = stack;
	i = 0;
	while (head)
	{
		table[i] = head->value;
		head = head->next;
		i++;
	}
	table = sorted_stack(table, lstsize);
	return (table);
}

void	index_stack(t_num **stack_a)
{
	int			i;
	long long	*filled_stack;
	t_num		*head;

	filled_stack = ft_stack(*stack_a);
	head = *stack_a;
	i = 0;
	while (head)
	{
		i = 0;
		while (i < lst_lstsize(*stack_a))
		{
			if (head->value == filled_stack[i])
			{
				head->index = i;
				break ;
			}
		i++;
		}
	head = head->next;
	}
	free(filled_stack);
}

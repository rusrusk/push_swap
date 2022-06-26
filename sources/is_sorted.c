/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:33:34 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:14:54 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_num *stack)
{
	t_num	*head;

	head = stack;
	while (head->next)
	{
		if (head->value > head->next->value)
		{
			return (1);
		}
	head = head->next;
	}
	return (0);
}

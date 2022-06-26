/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:06:08 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:39:29 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min(t_num *stack)
{
	t_num	*tmp;
	int		min;

	tmp = stack;
	min = 2147483647;
	while (tmp)
	{
		if (tmp->value < min)
		{
			min = tmp->value;
		}
		tmp = tmp->next;
	}
	return (min);
}

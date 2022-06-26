/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:03:11 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:14:12 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_lstclear(t_num *lst)
{
	t_num	*value;

	while (lst)
	{
		value = (lst)->next;
		free(lst);
		lst = value;
	}
	free(value);
}

t_num	*lst_lstnew(int value)
{
	t_num	*new;

	new = malloc (sizeof (*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

t_num	*lst_lstlast(t_num *head)
{
	t_num	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
		{
			return (tmp);
		}
	}
	return (tmp);
}

void	lst_lstadd_back(t_num **stack, t_num *new)
{
	t_num	*node;

	if (*stack)
	{
		node = lst_lstlast(*stack);
		node->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

int	lst_lstsize(t_num *head)
{
	size_t	i;
	t_num	*tmp;

	i = 0;
	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

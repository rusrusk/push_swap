/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:56:06 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 10:52:02 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "../push_swap.h"

int	integer_validation(long long int nb)
{
	if (nb < -2147483648 || nb > 2147483647)
	{
		return (0);
	}
	return (1);
}

int	check_args(int argc, char **argv, t_num **stack_a, t_num **stack_b)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (integer_validation(ft_atoi(argv[i])) == 0)
			error_message(stack_a, stack_b, "Error");
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j]) || (j == 0 && argv[i][0] == '-')))
			{
				return (0);
			}
		j++;
		}
		if (j > 11)
			return (0);
		j = 0;
		i++;
	}
	return (1);
}

t_num	*create_list(int argc, char **argv, t_num **stack_a, t_num **stack_b)
{
	t_num	*tmp;
	int		i;

	tmp = lst_lstnew(ft_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		if (!has_list(ft_atoi(argv[i]), tmp))
		{
			error_message(stack_a, stack_b, "Error");
			lst_lstclear(tmp);
			return (NULL);
		}
		else
		{
			lst_lstadd_back(&tmp, lst_lstnew(ft_atoi(argv[i])));
			i++;
		}
	}
	return (check_duplicate(tmp));
}

int	has_list(int nb, t_num	*lst)
{
	t_num	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp)
	{
		if (tmp->value == nb)
		{
			return (0);
		}
	tmp = tmp->next;
	}
	return (1);
}

t_num	*check_duplicate(t_num *stack)
{
	t_num	*tmp;
	t_num	*copy;

	copy = stack;
	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (tmp->value == stack->value)
			{
				lst_lstclear(copy);
				return (NULL);
			}
		tmp = tmp->next;
		}
	stack = stack->next;
	}
	return (copy);
}

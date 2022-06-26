/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:07:01 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:34:33 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_nb(t_num **stack_a, t_num **stack_b, int argc)
{
	if (is_sorted(*stack_a) == 0)
	{
		return ;
	}
	if (lst_lstsize(*stack_a) == 2)
	{
		sort_number_two(stack_a, stack_b);
	}
	else if (lst_lstsize(*stack_a) == 3)
	{	
		sort_number_three(stack_a, stack_b);
	}
	else if (lst_lstsize(*stack_a) == 4)
	{
		sort_number_four(stack_a, stack_b);
	}
	else if (lst_lstsize(*stack_a) == 5)
	{
		sort_number_five(stack_a, stack_b);
	}
	else
		radix_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_num	**stack_a;
	t_num	**stack_b;
	int		i;
	int		j;

	if (argc < 2)
	{
		return (-1);
	}
	stack_a = malloc (sizeof (t_num *));
	stack_b = malloc (sizeof (t_num *));
	*stack_a = NULL;
	*stack_b = NULL;
	if (!check_args(argc, argv, stack_a, stack_b))
	{
		error_message(stack_a, stack_b, "Error");
		return (0);
	}
	*stack_a = create_list(argc, argv, stack_a, stack_b);
	push_nb(stack_a, stack_b, argc);
	free_stack(stack_a);
	free_stack(stack_b);
	free(stack_a);
	free(stack_b);
}

/*
void	loop_list(t_num **head)
{
	t_num	*tmp;

	tmp = *head;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}

static	void	inStack(t_num **stack, int argc, char **argv)
{
	t_num		*new;
	char 		**argums;
	long		i;

	i = 1;
	if (argc == 2)
	{
		i = 0;
		argums = ft_split(argv[1], ' ');
		while (argums[i])
		{
			new = lst_lstnew(ft_atoi(argums[i]));
			lst_lstadd_back(stack, new);
			i++;
		}
	}
	else
	{
		while (i < argc)
		{
			new = lst_lstnew(ft_atoi(argv[i]));
			lst_lstadd_back(stack, new);
			i++;
		}
	}
	if (argc == 2)
	{
		while (i >= 0)
			free(argums[i--]);
		free(argums);
	}
}
*/
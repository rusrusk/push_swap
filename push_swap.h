/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:26:58 by rkultaev          #+#    #+#             */
/*   Updated: 2022/07/05 22:14:47 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "libft_pushswap/libft.h"

typedef struct s_num
{
	int				value;
	int				index;
	struct s_num	*next;
}	t_num;

t_num	*lst_lstnew(int value);
t_num	*lst_lstlast(t_num *head);
void	lst_lstadd_back(t_num **stack, t_num *new);
int		lst_lstsize(t_num *head);
void	lst_lstclear(t_num *lst);

int		check_args(int argc, char **argv, t_num **stack_a, t_num **stack_b);
t_num	*create_list(int argc, char **argv, t_num **stack_a, t_num **stack_b);
int		has_list(int nb, t_num	*lst);
t_num	*check_duplicate(t_num *stack);

void	error_message(t_num **stack_a, t_num **stack_b, char *msg);
void	free_stack(t_num **stack);
int		is_sorted(t_num *stack);
int		ft_strcmp(char *s1, char *s2);
int		ft_sizeof(const char *str);

void	push_nb(t_num **stack_a, t_num **stack_b, int argc);

void	radix_sort(t_num **stack_a, t_num **stack_b);
void	index_stack(t_num **stack_a);

int		find_min(t_num *stack);

void	sort_number_five(t_num **stack_a, t_num **stack_b);
void	best_five_move(t_num **stack_a, int i, int lstsize);
void	sort_number_four(t_num **stack_a, t_num **stack_b);
void	sort_number_three(t_num **stack_a, t_num **stack_b);
void	sort_number_two(t_num	**stack_a, t_num **stack_b);

void	run_operations(t_num **stack_a, t_num **stack_b, char *str);
void	push_to(t_num **stack_a, t_num **stack_b);
void	ft_reverse_rotate(t_num **mystack);
void	ft_rotate(t_num **mystack);
void	ft_swap(t_num **mystack);
void	print_operations(char *str);

#endif

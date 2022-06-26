/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 11:11:40 by rkultaev          #+#    #+#             */
/*   Updated: 2022/06/26 11:17:44 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error_message(t_num **stack_a, t_num **stack_b, char *msg)
{
	ft_putendl_fd(msg, 1);
	free(stack_a);
	exit(0);
}

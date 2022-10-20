/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:44:13 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/20 19:44:14 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_lib.h"

/*
** ROTATE operations
*/
void	ra(t_stack *stack_a)
{
	int	i;

	i = stack_a->head;
	while (i--)
		swap(&stack_a->list[i], &stack_a->list[i + 1]);
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	int	last;
	int	i;

	i = 0;
	last = stack_b->list[stack_b->head];
	while (i < stack_b->head)
	{
		swap(&stack_b->list[i], &stack_b->list[i + 1]);
		i++;
	}
	stack_b->list[stack_b->head - 1] = last;
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

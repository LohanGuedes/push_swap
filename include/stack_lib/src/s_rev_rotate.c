/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_rev_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:38:25 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/25 20:36:41 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_lib.h"

/*
** REVERSE ROTATE operations
*/
void	rra(t_stack *stack_a)
{
	int	last;
	int	i;

	i = stack_a->head + 1;
	last = stack_a->list[stack_a->head];
	while (i)
	{
		swap(&stack_a->list[i], &stack_a->list[i - 1]);
		i--;
	}
	stack_a->list[0] = last;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b)
{
	int	last;
	int	i;

	i = stack_b->head + 1;
	last = stack_b->list[stack_b->head];
	while (i)
	{
		swap(&stack_b->list[i], &stack_b->list[i - 1]);
		i--;
	}
	stack_b->list[0] = last;
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

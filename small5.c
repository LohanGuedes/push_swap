/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:29 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/25 22:45:27 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	push_smallest(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	smallest;

	smallest = min_value(stack_a);
	i = stack_a->head;
	while ((stack_a->list[stack_a->head] != smallest) && (i <= stack_a->head))
		ra(stack_a);
	pb(stack_a, stack_b);
	return ;
}

void	small5_sort(t_stack *stack_a, t_stack *stack_b)
{
	push_smallest(stack_a, stack_b);
	push_smallest(stack_a, stack_b);
	small3_sort(stack_a);
	if (stack_b->list[0] < stack_b->list[1])
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

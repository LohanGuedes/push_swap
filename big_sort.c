/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:43:45 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/20 19:51:05 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_msb_pos(unsigned int x)
{
	int	i;

	i = 0;
	while (x)
	{
		x >>= 1;
		i++;
	}
	return (i - 1);
}

void	push_all_a(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_b->head >= 0)
		pa(stack_a, stack_b);
}

int	valid(t_stack *stack, int current_bit)
/*
	A possible optimization
*/
{
	int	i;

	i = stack->size;
	while (--i)
	{
		if (((unsigned int)(stack->list[i] >> current_bit) & 1) !=
			((unsigned int)(stack->list[i - 1] >> current_bit) & 1))
			return (1);
	}
	return (0);
}

void	sort_big_stack(t_stack *stack_a, t_stack *stack_b)
/*
	This is a implementation of a binary radix sort.
	Check for each bit and move them between the stacks accordingly.
*/
{
	unsigned int	temp;
	int				msb_pos;
	int				current_bit;
	int				n_operations;

	current_bit = 0;
	add_slack(stack_a);
	msb_pos = find_msb_pos(max_value(stack_a)) + 1;
	while (current_bit < msb_pos)
	{
		n_operations = 0;
		while (n_operations < stack_a->size)
		{
			temp = stack_a->list[stack_a->head];
			if ((temp >> current_bit) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			n_operations++;
		}
		push_all_a(stack_a, stack_b);
		current_bit++;
	}
}

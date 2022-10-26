/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:43:45 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/25 22:44:34 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	small3_sort(t_stack *stack_a)
/*
** Since pushswap project ask for the max of 3 movements when sorting a stack of
** 3 items, The only way I could see how to do it, was by doing it go-horse way.
** As my friend wcaetano would say
*/
{
	int	nums[3];

	nums[0] = stack_a->list[2];
	nums[1] = stack_a->list[1];
	nums[2] = stack_a->list[0];
	if (nums[0] > nums[1] && nums[0] < nums[2] && nums[1] < nums[2])
		sa(stack_a);
	else if (nums[0] > nums[1] && nums[0] > nums[2] && nums[1] > nums[2])
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (nums[0] > nums[1] && nums[0] > nums[2] && nums[1] < nums[2])
		ra(stack_a);
	else if (nums[0] < nums[1] && nums[0] < nums[2] && nums[1] > nums[2])
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (nums[0] < nums[1] && nums[0] > nums[2] && nums[1] > nums[2])
		rra(stack_a);
}

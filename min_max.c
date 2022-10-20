/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:47:32 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/20 19:48:44 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	min_value(t_stack *stack)
{
	int	i;
	int	min;

	i = stack->head;
	min = stack->list[i];
	while (i--)
		if (stack->list[i] < min)
			min = stack->list[i];
	return (min);
}

int	max_value(t_stack *stack)
{
	int	i;
	int	max;

	i = stack->head;
	max = stack->list[i];
	while (i--)
		if (stack->list[i] > max)
			max = stack->list[i];
	return (max);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:22:07 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/20 19:23:27 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

unsigned int	add_slack(t_stack *stack)
{
	unsigned int	slack;
	int				min;
	int				i;

	i = stack->size;
	slack = 0;
	min = min_value(stack);
	if (min < 0)
		slack = -min;
	while (i-- && slack)
		stack->list[i] += slack;
	return (slack);
}

void	remove_slack(t_stack *stack, unsigned int slack)
{
	int	i;

	i = stack->size;
	while (i-- && slack)
		stack->list[i] -= slack;
}

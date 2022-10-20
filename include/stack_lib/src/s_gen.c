/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_gen.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:37:46 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/20 19:42:45 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_lib.h"

t_stack	s_gen(int size)
{
	t_stack	stack;

	stack.list = (int *)malloc(sizeof(int) * size);
	stack.size = size;
	stack.head = -1;
	return (stack);
}

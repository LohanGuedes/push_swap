/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:29 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/20 19:49:34 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

t_stack	s_build_and_populate(int argc, char *argv[])
{
	int		i;
	t_stack	stack;

	stack = s_gen(argc - 1);
	i = stack.size;
	while (i--)
		stack.list[i] = ft_atoi(argv[argc - i - 1]);
	stack.head = stack.size -1;
	return (stack);
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	stack_a = s_build_and_populate(argc, argv);
	stack_b = s_gen(argc - 1);
	if (argc > 5)
		sort_big_stack(&stack_a, &stack_b);
	return (0);
}

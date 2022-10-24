/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:29 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/21 07:49:29 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"
#include "include/libft/src/libft.h"

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

	if(argc -1 == 3)
		small3_sort(&stack_a);
	else if(argc - 1 == 5)
		;//
	else
	sort_big_stack(&stack_a, &stack_b);

	for(int i = 0; i < stack_a.size; i++)
		ft_printf("%d\n", stack_a.list[i]);

	free(stack_a.list);
	free(stack_b.list);
	return (0);
}

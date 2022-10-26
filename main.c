/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:29 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/25 23:17:54 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

long int	ps_atoi(const char *str)
{
	long int	res;
	int			i;
	int			sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

void	is_num(char *arg)
{
	int	i;

	i = 0;
	if ((arg[i] == '-' || arg[i] == '+') && arg[i + 1])
		i++;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			quit();
		i++;
	}
}

void	check_params(char **argv)
{
	int			i;
	long int	a_ret;

	i = 1;
	while (argv[i])
	{
		a_ret = ps_atoi(argv[i]);
		if (a_ret > INT_MAX || a_ret < INT_MIN)
			quit();
		is_num(argv[i]);
		i++;
	}
}

t_stack	s_build_and_populate(int argc, char *argv[])
{
	int		i;
	t_stack	stack;

	check_params(argv);
	stack = s_gen(argc - 1);
	i = stack.size;
	while (i--)
		stack.list[i] = ft_atoi(argv[argc - i - 1]);
	stack.head = stack.size -1;
	is_sorted(stack.list, stack.size);
	has_duplicate(stack.list, stack.size);
	return (stack);
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc == 1)
		return (0);
	stack_a = s_build_and_populate(argc, argv);
	stack_b = s_gen(argc - 1);
	if (argc - 1 == 3)
		small3_sort(&stack_a);
	else if (argc - 1 == 5)
		small5_sort(&stack_a, &stack_b);
	else
		sort_big_stack(&stack_a, &stack_b);
	free(stack_a.list);
	free(stack_b.list);
	return (0);
}

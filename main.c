#include "./include/push_swap.h"
#include "include/libft/src/libft.h"

t_stack s_build_and_populate(int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	t_stack stack_a;

	stack_a = s_build_and_populate(argc, argv);
}

t_stack s_build_and_populate(int argc, char *argv[])
{
	int		i;
	t_stack	stack;

	stack = s_gen(argc - 1);

	i = 1;
	while(argv[i])
		push(&stack, ft_atoi(argv[i++]));
	return (stack);
}

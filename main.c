#include "./include/push_swap.h"
#include "include/libft/src/libft.h"

t_stack s_build_and_populate(int argc, char *argv[]);

int	min_value(t_stack *stack)
{
	int	i;
	int min;

	i = stack->head;
	min = stack->list[i];
	while(i--)
		if(stack->list[i] < min)
			min = stack->list[i];

	return (min);
}

int	max_value(t_stack *stack)
{
	int	i;
	int max;

	i = stack->head;
	max = stack->list[i];
	while(i--)
		if(stack->list[i] > max)
			max = stack->list[i];

	return (max);
}

int	add_slack(t_stack *stack)
{
	int min;
	int	slack;
	int i;

	i = stack->size;
	slack = 0;
	min = min_value(stack);
	if(min < 0)
		slack = -min;
	while(i-- && slack)
		stack->list[i] += slack;

	return (slack);
}

void	remove_slack(t_stack *stack, int slack)
{
	int i;

	i = stack->size;
	while(i-- && slack)
		stack->list[i] -= slack;
}

int	find_msb_pos(unsigned x)
{
	int i;

	i = 0;
	while (x)
	{
		x >>= 1;
		i++;
	}
	return (i-1);
}

void	push_all_a(t_stack *stack_a, t_stack *stack_b)
{
	while(stack_b->head >= 0)
		pa(stack_a, stack_b);
}

int	valid(t_stack *stack, int current_bit)
{
	int i;


	i = stack->size;
	while(--i)
	{
		if((unsigned int)(stack->list[i] >> current_bit) & 1 !=
			(unsigned int)(stack->list[i-1] >> current_bit) & 1)
			return (1);
	}
	return (0);
}

void	sort_big_stack(t_stack *stack_a, t_stack *stack_b)
{
	int count;
	int	msb_pos;
	int current_bit;
	int n_operations;
	int slack;

	current_bit = 0;
	msb_pos = find_msb_pos(max_value(stack_a)) + 1;
	slack = add_slack(stack_a);
	count = 0;

	while(current_bit < msb_pos)
	{
		n_operations = 0;
		if(valid(stack_a, current_bit))
		{
			while(n_operations < stack_a->size)
			{
				if(((unsigned int)(stack_a->list[stack_a->head] >> current_bit) & 1))
					pb(stack_a, stack_b);
				else
					ra(stack_a);
				n_operations++;
				count++;
			}
			push_all_a(stack_a, stack_b);
		}
		current_bit++;
	}
	remove_slack(stack_a, slack);
}

int	main(int argc, char *argv[])
{
	t_stack stack_a;
	t_stack stack_b;

	stack_a = s_build_and_populate(argc, argv);
	stack_b = s_gen(argc - 1);

	sort_big_stack(&stack_a, &stack_b);
	// for(int i = 0; i < stack_a.size; i++)
	//   	ft_printf("%i\n", stack_a.list[i]);

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

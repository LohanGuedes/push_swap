#include "stack_lib.h"

/*
** REVERSE ROTATE operations
*/
void	rra(t_stack *stack_a)
{
	int last;
	int i;

	i = 0;
	last = stack_a->list[stack_a->head];
	while(i < stack_a->head)
	{
		swap(&stack_a->list[i], &stack_a->list[i+1]);
		i++;
	}
	stack_a->list[stack_a->head - 1] = last;
}

void	rrb(t_stack *stack_b)
{
	int last;
	int i;

	i = 0;
	last = stack_b->list[stack_b->head];
	while(i < stack_b->head)
	{
		swap(&stack_b->list[i], &stack_b->list[i+1]);
		i++;
	}
	stack_b->list[stack_b->head - 1] = last;
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}

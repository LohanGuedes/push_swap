#include "stack_lib.h"

/*
** REVERSE ROTATE operations
*/
void	rra(t_stack *stack_a)
{
	int last;
	int i;

	i = stack_a->head+1;
	last = stack_a->list[stack_a->head];
	while(i)
	{
		swap(&stack_a->list[i], &stack_a->list[i-1]);
		i--;
	}
	stack_a->list[0] = last;
}

void	rrb(t_stack *stack_b)
{
	int last;
	int i;

	i = stack_b->head+1;
	last = stack_b->list[stack_b->head];
	while(i)
	{
		swap(&stack_b->list[i], &stack_b->list[i-1]);
		i--;
	}
	stack_b->list[0] = last;
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

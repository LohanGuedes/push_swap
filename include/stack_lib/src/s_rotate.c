#include "stack_lib.h"

/*
** ROTATE operations
*/
void	ra(t_stack *stack_a)
{
	int last;
	int i;

	i = stack_a->head;
	last = stack_a->list[stack_a->head];
	while(i)
	{
		swap(&stack_a->list[i], &stack_a->list[i-1]);
		i--;
	}
	stack_a->list[0] = last;
}

void	rb(t_stack *stack_b)
{
	int last;
	int i;

	i = stack_b->head;
	last = stack_b->list[stack_b->head];
	while(i)
	{
		swap(&stack_b->list[i], &stack_b->list[i-1]);
		i--;
	}
	stack_b->list[0] = last;
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

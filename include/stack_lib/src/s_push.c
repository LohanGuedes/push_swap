#include "stack_lib.h"

/*
** PUSH operations
*/
void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if(stack_b->head == -1)
		return ;
	push(stack_a, stack_b->list[stack_b->head]);
	pop(stack_b);
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if(stack_a->head == -1)
		return ;
	push(stack_b, stack_a->list[stack_a->head]);
	pop(stack_a);
	write(1, "pb\n", 3);
}

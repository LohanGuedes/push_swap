#include "stack_lib.h"

/*
** Stack basics
*/
void	push(t_stack *stack, int num)
{
	if(stack->head == stack->size)
	{
		write(2, STACK_OVERFLOW, 19);
		exit(1);
	}

	stack->head++;
	stack->list[stack->head] = num;

	return ;
}

void	pop(t_stack *stack)
{
	if(stack->head == -1)
	{
		write(2, STACK_UNDERFLOW, 20);
		exit(1);
	}
	stack->head--;
	return ;
}


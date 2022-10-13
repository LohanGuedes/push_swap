#include "stack_lib.h"

/*
** SWAP operations
*/
void	sa(t_stack *stack_a)
{
	if(stack_a->head == 1 || stack_a->head == -1)
		return ;
	swap(&stack_a->list[stack_a->head],
		 &stack_a->list[stack_a->head-1]);
}

void	sb(t_stack *stack_b)
{
	if(stack_b->head == 1 || stack_b->head == -1)
		return ;
	swap(&stack_b->list[stack_b->head],
		 &stack_b->list[stack_b->head-1]);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = *&temp;
}

#include "stack_lib.h"

t_stack	s_gen(int size)
{
	t_stack stack;

	stack.list = (int*)malloc(sizeof(int) * size);
	stack.size = size;
	stack.head = -1;

	return (stack);
}

#ifndef STACK_LIB_H
#define STACK_LIB_H

# include <stdlib.h>
# include <unistd.h>


# define STACK_OVERFLOW "STACK OVERFLOW!!!\n"
# define STACK_UNDERFLOW "STACK UNDERFLOW!!!\n"

typedef struct s_stack {
		int	*list;
		int	head;
		int	size;
}	t_stack;


/* Basic operations */
void	push(t_stack *stack, int num);
void	pop(t_stack *stack);

/* Swap operations */
void	swap(int *a, int *b);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);

/* Rotate operations */
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);

/* Reverse rotate operations */
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

#endif // STACK_LIB_H

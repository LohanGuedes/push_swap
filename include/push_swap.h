/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:49:46 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/25 23:04:20 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/src/libft.h"
# include "stack_lib/src/stack_lib.h"

# define INT_MIN  -2147483648
# define INT_MAX   2147483647

t_stack			s_build_and_populate(int argc, char *argv[]);
void			sort_big_stack(t_stack *stack_a, t_stack *stack_b);
int				valid(t_stack *stack, int current_bit);
void			push_all_a(t_stack *stack_a, t_stack *stack_b);
int				find_msb_pos(unsigned int x);
void			remove_slack(t_stack *stack, unsigned int slack);
unsigned int	add_slack(t_stack *stack);
int				min_value(t_stack *stack);
int				max_value(t_stack *stack);
void			small3_sort(t_stack *stack_a);
void			small5_sort(t_stack *stack_a, t_stack *stack_b);
int				has_duplicate(int *arr, int size);
void			is_sorted(int *arr, int size);

#endif // PUSH_SWAP_H

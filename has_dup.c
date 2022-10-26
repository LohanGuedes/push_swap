/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:22:17 by lguedes           #+#    #+#             */
/*   Updated: 2022/10/25 23:17:28 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	has_duplicate(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				free(arr);
				quit();
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	is_sorted(int *arr, int size)
{
	int	i;

	i = 0;
	while (arr[i] > arr[i + 1])
	{
		if (i == size - 2)
		{
			free(arr);
			exit(0);
		}
		i++;
	}
}

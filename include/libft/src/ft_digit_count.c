/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:49:10 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/23 15:49:57 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_count(long long int num, int base)
{
	int	digit_count;

	digit_count = 0;
	if (!num)
		return (1);
	while (num != 0)
	{
		digit_count++;
		num /= base;
	}
	return (digit_count);
}

int	ft_unsigned_digit_count(unsigned long int num, int base)
{
	int	digit_count;

	digit_count = 0;
	if (!num)
		return (1);
	while (num != 0)
	{
		digit_count++;
		num /= base;
	}
	return (digit_count);
}

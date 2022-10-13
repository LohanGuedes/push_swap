/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:45:33 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/23 15:46:26 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_push_decimal(va_list args)
{
	int	num;

	num = va_arg(args, int);
	ft_putnbr_fd(num, 1);
	if (num < 0)
		return (ft_digit_count(num, 10) + 1);
	return (ft_digit_count(num, 10));
}

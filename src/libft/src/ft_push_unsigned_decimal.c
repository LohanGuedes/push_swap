/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_unsigned_decimal.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:38:33 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/23 15:38:40 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_push_unsigned_decimal(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	ft_putnbr_fd(num, 1);
	return (ft_digit_count(num, 10));
}

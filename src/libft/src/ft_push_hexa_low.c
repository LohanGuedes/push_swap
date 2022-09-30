/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_hexa_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:44:37 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/23 15:44:52 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_push_hex_lower(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	ft_puthexanbr_fd(num, 1, "0123456789abcdef");
	return (ft_unsigned_digit_count(num, 16));
}

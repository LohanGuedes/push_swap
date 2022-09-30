/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:43:20 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/23 15:43:31 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_push_pointer(va_list args)
{
	unsigned long int	address;

	address = va_arg(args, unsigned long int);
	ft_putstr_fd("0x", 1);
	ft_puthexanbr_fd(address, 1, "0123456789abcdef");
	if (!address)
		return (3);
	return (ft_unsigned_digit_count(address, 16) + 2);
}

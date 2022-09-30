/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_hexa_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:44:02 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/23 15:44:52 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_push_hex_upper(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	ft_puthexanbr_fd(num, 1, "0123456789ABCDEF");
	return (ft_digit_count(num, 16));
}

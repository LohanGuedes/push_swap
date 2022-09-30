/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:48:03 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/23 15:48:08 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *string, ...)
{
	int		c_print;
	int		offset;
	va_list	args;

	c_print = 0;
	offset = 0;
	va_start(args, string);
	while (string[offset])
	{
		if (string[offset] == '%' && ft_isplaceholder(string[offset + 1]))
		{
			c_print += ft_push_right(string[offset + 1], args);
			offset++;
		}
		else
		{
			c_print++;
			ft_putchar_fd(string[offset], 1);
		}
		offset++;
	}
	va_end(args);
	return (c_print);
}

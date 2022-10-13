/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexanbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:37:54 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/23 15:37:58 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexanbr_fd(unsigned long int n, int fd, char *digits)
{
	if (n < 16)
	{
		ft_putchar_fd(digits[n], 1);
		return ;
	}
	else
		ft_puthexanbr_fd(n / 16, fd, digits);
	ft_puthexanbr_fd(n % 16, fd, digits);
}

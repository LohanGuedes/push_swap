/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:18:28 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/10 16:13:13 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	size_t		delete;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	delete = count * size;
	ft_bzero(ptr, delete);
	return (ptr);
}

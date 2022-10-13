/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:23:09 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/19 11:26:15 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = node;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = node;
	node->next = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:28:59 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/21 02:23:32 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i_start;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	i_start = 0;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && i_start < len)
			substr[i_start++] = s[i];
		i++;
	}
	substr[i_start] = '\0';
	return (substr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:35:39 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/21 00:22:07 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char *s, char c);
static int	sub_len(char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		splits;
	int		offset;
	int		substring;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	offset = 0;
	splits = count_splits(str, c);
	final = malloc(sizeof(char *) * (splits + 1));
	if (final == NULL)
		return (NULL);
	final[splits] = NULL;
	while (offset < splits)
	{
		while (*str != '\0' && *str == c)
			str++;
		substring = sub_len(str, c);
		final[offset++] = ft_substr(str, 0, substring);
		str += substring;
	}
	return (final);
}

static int	count_splits(char *str, char c)
{
	int	sublen;
	int	splitnum;

	splitnum = 0;
	while (*str != '\0')
	{
		while (*str && *str == c)
			str++;
		sublen = sub_len(str, c);
		str += sublen;
		if (sublen)
			splitnum++;
	}
	return (splitnum);
}

static int	sub_len(char *str, char c)
{
	int	len;

	len = 0;
	while (*str != '\0' && *str != c)
	{
		str++;
		len++;
	}
	return (len);
}

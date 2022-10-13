/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:39:58 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/16 10:10:50 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	static char	*work[4096];
	char		*result;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	work[fd] = read_fl(fd, work[fd]);
	if (!work[fd])
		return (NULL);
	result = strgln(work[fd]);
	work[fd] = strgal(work[fd]);
	if (!ft_gnl_strlen(result))
	{
		free(work[fd]);
		free(result);
		return (NULL);
	}
	return (result);
}

char	*read_fl(int fd, char *work)
{
	int		rbamount;
	char	*buff;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rbamount = 1;
	while (!ft_gnl_strchr(work, '\n') && rbamount != 0)
	{
		rbamount = read(fd, buff, BUFFER_SIZE);
		if (rbamount == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rbamount] = '\0';
		work = ft_gnl_strjoin(work, buff);
	}
	free(buff);
	return (work);
}

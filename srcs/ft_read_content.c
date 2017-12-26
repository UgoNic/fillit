/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_content.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:16:18 by jjaniec           #+#    #+#             */
/*   Updated: 2017/12/26 16:57:54 by unicolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	*ft_resize_buf(int fd, char *buf, int *bufsize_multiplier, int *wrote)
{
	char	*buf2;

	if (!(buf2 = (char *)malloc(sizeof(char) *
	BUFF_SIZE * *bufsize_multiplier + 1)))
		return (NULL);
	*wrote = read(fd, buf2, (BUFF_SIZE * *bufsize_multiplier));
	buf2[*wrote] = '\0';
	*bufsize_multiplier += 1;
	return (ft_strjoin(buf, buf2));
}

char	*ft_read_content(int fd)
{
	char	*buf;
	int		x;
	int		multiplier;

	multiplier = 1;
	if (!(buf = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (NULL);
	x = read(fd, buf, BUFF_SIZE);
	buf[x] ='\0';
	if (x < BUFF_SIZE)
		return (buf);
	while (x > 0)
		buf = ft_resize_buf(fd, buf, &multiplier, &x);
	return (buf);
}

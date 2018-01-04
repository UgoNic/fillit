/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:56:50 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/11 17:05:54 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s[++i])
		;
	while (s[i] != (char)c && i > 0)
		i--;
	return ((s[i] == (char)c) ? ((char *)&s[i]) : (NULL));
}

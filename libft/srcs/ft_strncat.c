/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:51:38 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/11 17:04:28 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <strings.h>

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	while (s1[++i] != '\0')
		;
	while (s2[++j] != '\0' && j < n)
		s1[i++] = s2[j];
	s1[i] = '\0';
	return (s1);
}

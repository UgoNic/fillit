/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:00:32 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/13 15:50:40 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
	return (dst);
}

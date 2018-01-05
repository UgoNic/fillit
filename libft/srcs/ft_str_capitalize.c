/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_capitalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 17:42:26 by jjaniec           #+#    #+#             */
/*   Updated: 2017/12/16 18:05:32 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_str_capitalize(char *s)
{
	char	*t;

	t = &(*s);
	while (*s)
		if (*s >= 'a' && *s <= 'z')
			*s++ -= 32;
	return (t);
}

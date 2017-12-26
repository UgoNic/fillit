/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_tetris.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:16:34 by jjaniec           #+#    #+#             */
/*   Updated: 2017/12/25 17:51:22 by unicolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_count_tetris(char *file_content)
{
	int		i;

	i = 1;
	while (ft_parse_tetri(file_content, i) != NULL)
		i += 1;
	return (i - 1);
}

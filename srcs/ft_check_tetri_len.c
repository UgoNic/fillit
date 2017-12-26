/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 15:37:26 by unicolai          #+#    #+#             */
/*   Updated: 2017/12/26 16:12:43 by unicolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_check_tetri_len(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i - 1] == '\n' && s[i] == '\n' && s[i + 1] && count % 20 != 0)
		{
			write(1, "error\n", 6);
			return (1);
		}
		else if (s[i - 1] == '\n' && s[i] == '\n')
			count--;
		i++;
		count++;
	}
	return (0);
}

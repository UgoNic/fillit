/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:50:16 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/22 13:47:47 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_itoa_slen(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*s;

	i = ft_itoa_slen(n) - 1;
	if (!(s = (char *)malloc(sizeof(char) * i + 2)))
		return (NULL);
	if ((unsigned int)-n == 2147483648)
		return (ft_strdup("-2147483648"));
	s[i + 1] = '\0';
	if (n < 0)
		s[0] = '-';
	if (n == 0)
		s[i] = '0';
	n = ((n < 0) ? (-n) : (n));
	while (i > ((n > 0) ? (-1) : (0)))
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (s);
}

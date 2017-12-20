/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_copy_.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:07:13 by jjaniec           #+#    #+#             */
/*   Updated: 2017/12/20 17:27:12 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fillit.h"

char	*ft_generate_map(int x);

int		ft_map_copy(char **map, t_tetri *t);

int		ft_can_copy(char **map, t_tetri *t)
{
	char	*tmp;

	tmp = ft_strdup(*map);
	if (ft_map_copy(&tmp, t) != 0)
	{
		free(tmp);
		return (1);
	}
	free(tmp);
	return (0);
}

int		ft_map_copy(char **map, t_tetri *t)
{
	int		i;
	int		j;
	int		w;

	w = 0;
	j = 0;
	while ((*map)[w] != '\n')
		w++;
	i = 0 + ((w + 1) * t->y) + t->x;
	w = 0;
	while ((*map)[i] && t->s[j])
	{
		if ((*map)[i] == '\n')
		{
			while (t->s[j] != '\n')
				j += 1;
			i += t->x;
		}
		else if (t->s[j] != '.')
			if ((*map)[i] != '.')
				return (1);
			else if ((*map)[i] == '.')
			{
				(*map)[i] = t->s[j];
				w += 1;
			}
		i++;
		j++;
	}
	printf("-c%d-", w);
	return (((w == 4) ? (0) : (1)));
}

char	*ft_resize_tetri(t_tetri *t, size_t size)
{
	char	*new_t;
	int		i;
	int		j;

	new_t = ft_generate_map(size);
	i = 0;
	j = 0;
	while (t->s[i] && new_t[j])
	{
		while (t->s[i] != '\n')
		{
			if (new_t[j] == '.')
				new_t[j] = t->s[i];
			i++;
			j++;
		}
		while (new_t[j] != '\n')
			j++;
		i++;
		j++;
	}
	return (new_t);
}

int		main()
{
	char *m;
	t_tetri t;
	t_tetri t2;

	t.s = "AA..\n.AA.\n....\n....\n";
	t.x = 0;
	t.y = 0;
	t2.s = "BBB.\nB...\n....\n....\n";
	t2.x = 2;
	t2.y = 0;
	m = ft_generate_map(8);
	t.s = ft_resize_tetri(&t, 8);
	printf("%d", ft_map_copy(&m, &t));
	printf("new_t\n%s", t.s);
	printf("aaaaa\n%s", m);

	t2.s = ft_resize_tetri(&t2, 8);
	printf("%d", ft_map_copy(&m, &t2));
	printf("new_t\n%s", t2.s);
	printf("aaaaa\n%s", m);
	return (0);
}

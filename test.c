/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/24 16:49:44 by unicolai          #+#    #+#             */
/*   Updated: 2017/12/25 17:47:36 by unicolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int		main()
{
	int		i;
	int		i2;
	int		i3;
	char	*map;
	t_tetri t1;
	t_tetri t2;
	t_tetri t3;
	t_tetri t4;
	t_tetri	*tabtetri;
	int		nbtetri;
	int		taillemap;

	t1.s = ".#..\n.#..\n##..\n....\n";
	t2.s = "#...\n#...\n##..\n....\n";
	t3.s = "##..\n##..\n....\n....\n";
	t4.s = "####\n....\n....\n....\n";
	t1.decaltetri = 0;
	t2.decaltetri = 0;
	t3.decaltetri = 0;
	t4.decaltetri = 0;
	i = -1;
	i2 = 0;
	i3 = 0;
	if (!(tabtetri = (t_tetri *)malloc(sizeof(t_tetri) * 5)))
		return (0);
	tabtetri[0] = t1;
	tabtetri[1] = t2;
	tabtetri[2] = t3;
	tabtetri[3] = t4;
	tabtetri[4].s = NULL;
	nbtetri = 0;
	while (tabtetri[++i].s != NULL)
		nbtetri++;
	taillemap = ft_fillit_sqrt(nbtetri * 4);// * ft_fillit_sqrt(nbtetri * 4) + nbtetri;
//	if (!(map = malloc(sizeof(*map) * (taillemap + 1))))
//		return (0);
//	printf("taillemap: %d\n", taillemap);
//	while (i2 < taillemap)
//	{
//		while (i3 < nbtetri)
//		{
//			map[i2] = '.';
//			i2++;
//			i3++;
//		}
//		map[i2] = '\n';
//		i3 = 0;
//		i2++;
//	}
//	map[i2] = '\0';
	map = ft_generate_map(taillemap);
	printf("%s\n", map);
	ft_fill_map(&map, tabtetri);
	i = 0;
	printf("%s\n", map);
	return (0);
}


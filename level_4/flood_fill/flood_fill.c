/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:42:14 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/24 15:32:49 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

typedef struct  s_point
{
	int           x;
	int           y;
}               t_point;

void	fill(char **tab, t_point size, t_point begin, char to_fill, char c)
{
	if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y)
		return ;
	if (tab[begin.y][begin.x] != to_fill)
		return ;
	
	tab[begin.y][begin.x] = c;

	fill(tab, size, (t_point){begin.x, begin.y + 1}, to_fill, c);
	fill(tab, size, (t_point){begin.x, begin.y - 1}, to_fill, c);
	fill(tab, size, (t_point){begin.x + 1, begin.y}, to_fill, c);
	fill(tab, size, (t_point){begin.x - 1, begin.y}, to_fill, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	to_fill = tab[begin.y][begin.x];
	char	c = 'F';

	fill(tab, size, begin, to_fill, c);
}

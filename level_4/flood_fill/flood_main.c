/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:57:19 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/15 13:09:33 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	print_tab(char **area)
{
	for (int i = 0; area[i]; i++)
		printf("%s\n", area[i]);
}

char	**make_area(char **zone)
{
	int i = 0;
	char **area;

	while (zone[i])
		i++;

	area = malloc((i + 1) * sizeof(char *));
	if (!area)
		return NULL;

	for (int j = 0; j < i; j++)
		area[j] = strdup(zone[j]);

	area[i] = NULL;
	return area;
}


int main(void)
{
	char **area;
	t_point size = {8, 5};
	t_point begin = {2, 2};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
		NULL
	};

	area = make_area(zone);
	print_tab(area);
	flood_fill(area, size, begin);
	putc('\n', stdout);
	print_tab(area);
	return (0);
}

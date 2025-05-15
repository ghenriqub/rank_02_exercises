/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:59:05 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/13 14:05:18 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i, lookup[256] = {0};

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
			lookup[(int)argv[1][i++]] = 1;
		i = 0;
		while (argv[2][i])
			lookup[(int)argv[2][i++]] = 1;
		i = -1;
		while (argv[1][++i])
		{
			if (lookup[(int)argv[1][i]])
			{
				write (1, &argv[1][i], 1);
				lookup[(int)argv[1][i]] = 0;
			}
		}
		i = -1;
		while (argv[2][++i])
		{
			if (lookup[(int)argv[2][i]])
			{
				write (1, &argv[2][i], 1);
				lookup[(int)argv[2][i]] = 0;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:06:22 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/12 17:17:15 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = -1, j;
	int	lookup[256] = {};

	if (argc == 3)
	{
		while (argv[1][++i])
		{
			j = -1;
			while (argv[2][++j])
			{
				if (argv[1][i] == argv[2][j] && !lookup[(int)argv[2][j]])
				{
					lookup[(int)argv[2][j]] = 1;
					write (1, &argv[2][j], 1);
				}
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}

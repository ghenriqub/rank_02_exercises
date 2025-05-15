/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:23:01 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/13 18:14:45 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = -1, space = 0;

		while (argv[1][++i] <= 32);
		while (argv[1][i])
		{
			if (argv[1][i] <= 32)
				space = 1;
			if (!(argv[1][i] <= 32))
			{
				if (space)
					write(1, " ", 1);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

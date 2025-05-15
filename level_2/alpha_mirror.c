/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 10:47:45 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/11 11:02:20 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = -1;

	if (argc == 2)
	{
		while (argv[1][++i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 'a' + ('z' - argv[1][i]);
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = 'A' + ('Z' - argv[1][i]);
			write (1, &argv[1][i], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}

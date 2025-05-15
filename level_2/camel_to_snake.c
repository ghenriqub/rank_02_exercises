/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:03:12 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/11 11:32:09 by ghenriqu         ###   ########.fr       */
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
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				write (1, "_", 1);
				argv[1][i] += 32;
			}
			write (1, &argv[1][i], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}

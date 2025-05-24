/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:51:58 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/16 07:50:46 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm' ||
				argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] += 13;
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z' ||
					argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] -= 13;
			write (1, &argv[1][i], 1);	
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

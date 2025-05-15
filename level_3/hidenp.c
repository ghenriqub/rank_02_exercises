/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:46:26 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/14 12:09:08 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	i = 0, j = 0;

		while (argv[2][i] && argv[1][j])
		{
			if (argv[2][i] == argv[1][j])
				j++;
			i++;
		}
		if (argv[1][j] == '\0')
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
	write (1, "\n", 1);
	return (0);
}

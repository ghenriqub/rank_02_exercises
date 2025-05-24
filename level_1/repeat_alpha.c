/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:09:30 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/22 14:23:04 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0, j;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][0] <= 90)
			{
				j = 0;
				while (j < (argv[1][i] - 65))
				{
					write (1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] >= 97 && argv[1][0] <= 122)
			{
				j = 0;
				while (j < (argv[1][i] - 96))
				{
					write (1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}

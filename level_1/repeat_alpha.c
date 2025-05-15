/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:09:30 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/10 15:39:17 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;

	// lets check how many args we have
	if (argc == 2)
	{
		// and loop over the whole string
		while (argv[1][i])
		{
			// if we have a lowercase, we get in
			if (argv[1][i] >= 65 && argv[1][0] <= 90)
			{
				j = 0;
				// we loop this letter until we reach it in the alphabet
				while (j < (argv[1][i] - 65))
				{
					write (1, &argv[1][i], 1);
					j++;
				}
			}
			// if we have an uppercase, we get in
			else if (argv[1][i] >= 97 && argv[1][0] <= 122)
			{
				j = 0;
				// we loop this letter until we reach it in the alphabet
				while (j < (argv[1][i] - 96))
				{
					write (1, &argv[1][i], 1);
					j++;
				}
			}
			// or we just skip this letter
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	// print a nl for formatation and bob's your uncle
	write (1, "\n", 1);
	return (0);
}

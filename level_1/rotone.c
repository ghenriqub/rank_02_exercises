/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:05:30 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/10 16:12:58 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	// lets check how many args first
	if (argc == 2)
	{
		while (argv[1][i])
		{
			// if its between a and z, +1
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y' ||
				argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				argv[1][i] += 1;
			// if its z, than it becomes a
			else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				argv[1][i] = 'a';
			// we print the char even if its transformed or not
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	// lets \n so we can return if has a different amount of args and format
	write (1, "\n", 1);
	return (0);
}

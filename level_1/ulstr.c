/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:27:41 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/10 18:36:51 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i = 0;

	// we check the args
	if (argc == 2)
	{
		// now we can run the string
		while (argv[1][i])
		{
			// if lowercase, than we go uppercase
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			// if uppercase, than we go lowercase
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			// than we print the char, changed or not
			write (1, &argv[1][i], 1);
			i++;
 		}
	}
	// we add the new line, if agrs are != 2 or at the end of line adn return
	write (1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:51:58 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/10 16:11:45 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i = 0;

	// lets check how many args first
	if (argc == 2)
	{
		// now we loop the string
		while (argv[1][i])
		{
			// if its between a and m, +13
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm' ||
				argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] += 13;
			// if its less, -13
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z' ||
					argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] -= 13;
			// we print the char even if its transformed or not
			write (1, &argv[1][i], 1);	
			// and iterate
			i++;
		}
	}
	// lets \n so we can return if has a different amount of args and format
	write (1, "\n", 1);
	return (0);
}

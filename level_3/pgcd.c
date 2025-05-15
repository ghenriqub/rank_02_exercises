/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:32:09 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/14 13:43:00 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argv == 3)
	{
		int	n1 = atoi(argv[1]);
		int	n2 = atoi(argv[2]);
	
		if (n1 > 0 && n2 > 0)
		{
			while (n1 != n2)
			{
				if (n1 > n2)
					n1 = n1 - n2;
				else
					n2 = n2 - n1;
			}
			printf("%d", n1);
		}
	}
	write (1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:11:10 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/15 13:23:03 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i = 2, n;
	
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		while (i <= n)
		{
			if ((n % i) == 0)
			{
				printf ("%d", i);
				if (n != i)
					printf ("*");
				n = n / i;
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}

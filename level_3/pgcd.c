/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:32:09 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/27 13:50:58 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		int n = 0;
		int i = 1;

		while (i < n1 && i < n2)
		{
			if ((n1 % i == 0) && (n2 % i == 0))
				n = i;
			i++;
		}
		printf("%d", n);
	}
	printf ("\n");
}

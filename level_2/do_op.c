/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:34:00 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/11 12:01:27 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	if (argc == 4)
	{
		int	arg1 = atoi(argv[1]);
		int	arg2 = atoi(argv[3]);

		if (argv[2][0] == '+')
			printf("%d", arg1 + arg2);
		else if (argv[2][0] == '-')
			printf("%d", arg1 - arg2);
		else if (argv[2][0] == '*')
			printf("%d", arg1 * arg2);
		else if (argv[2][0] == '/')
			printf("%d", arg1 / arg2);
		else if (argv[2][0] == '%')
			printf("%d", arg1 % arg2);
	}
	printf("\n");
	return (0);
}

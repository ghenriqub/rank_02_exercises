/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:19:37 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/13 11:45:17 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = -1, end;

	if (argc == 2)
	{
		while (argv[1][++i]);
		while (argv[1][i--] <= 32 && i > 0);
		end = i + 1;
		while (i-- >= 0 && argv[1][i] > 32);
		write (1, &argv[1][i + 1], end - i);
	}
	write (1, "\n", 1);
	return (0);
}

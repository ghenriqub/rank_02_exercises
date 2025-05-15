/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:15:00 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/15 18:28:06 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0, j, first_word = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i--;
			j = i;
			while (j >= 0 && (argv[1][j] != ' ' && argv[1][j] != '\t'))
				j--;
			if (first_word)
				write (1, " ", 1);
			write (1, &argv[1][j + 1], (i - j));
			first_word = 1;
			i = j;
		}
	}
	write (1, "\n", 1);
	return (0);
}

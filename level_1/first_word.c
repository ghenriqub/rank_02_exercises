/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:20:45 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/10 13:54:34 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	// lets check the number os args
	if (argc == 2)
	{
		// if the file starts with spaces or tabs we skip
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		// when we find valid chars we start to write them
		while (argv[1][i] != ' ' || argv[1][i] != '\t')
		{
			ft_write(argv[1], i);
			i++;
		}
	}
	// we write a new_line even if the argc is valid or not
	write (1, "\n", 1);
	return (0);
}

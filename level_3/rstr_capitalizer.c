/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:43:03 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/14 17:10:49 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	r_capitalize(char *str)
{
	int	i = -1;

	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && !(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i] -= 32;
		write (1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 1)
		write (1, "\n", 1);
	else
	{
		while (++i < argc)
		{
			r_capitalize(argv[i]);
			write (1, "\n", 1);
		}
	}
	return (0);
}

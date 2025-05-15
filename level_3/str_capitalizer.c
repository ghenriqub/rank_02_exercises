/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:00:28 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/14 17:14:13 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	capitalize(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] <= 32))
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
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
			capitalize(argv[i]);
			write (1, "\n", 1);
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:28:29 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/15 20:22:08 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rostring(char *str)
{
	int	i = 0;
	int	start = 0;
	int	end = 0;
	int	first_start = 0;
	int	first_end = 0;

	while ((str[i] == ' ' || str[i] == '\t') && str[i])
		i++;
	first_start = i;
	while ((str[i] != ' ' && str[i] != '\t') && str[i])
		i++;
	first_end = i;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (!str[i])
			break ;
		start = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t'))
			i++;
		end = i;
		write (1, &str[start], end - start);
		write (1, " ", 1);
		
	}
	write (1, &str[first_start], (first_end - first_start));
	return ;
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	write (1, "\n", 1);
	return (0);
}

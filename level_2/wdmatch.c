/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:39:20 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/13 12:53:13 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		const char	*s1 = argv[1];
		const char	*s2 = argv[2];
		int	len = -1, i = 0, j = -1;

		while (s1[++len]);
		while (i < len && s2[++j])
		{
			if (s1[i] == s2[j])
				i++;
		}
		if (i == len)
			write (1, s1, len);
	}
	write (1, "\n", 1);
	return (0);
}

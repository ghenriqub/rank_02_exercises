/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:23:01 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/26 13:41:59 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int count_words(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			count++;
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
				i++;
		}
		else	
			i++;
	}
	return (count);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int words = 0;
		int end = count_words(argv[1]);
	
		while (argv[1][i])
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				words++;
				while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
				{
					write (1, &argv[1][i], 1);
					i++;
				}
				if (words < end)
					write(1, " ", 1);
			}
			else
				i++;
		}
	}
	write (1, "\n", 1);
}

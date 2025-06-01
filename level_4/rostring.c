/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:28:29 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/23 16:15:37 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	count_words(char *str)
{
	int	i = 0, count = 0;

	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			count++;
			while (str[i] && str[i] != ' ' && str[i] != '\t')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int	i = 0, j = 0, k, l;

	char	**split = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		if (str[i] && (str[i] != ' ' && str[i] !=  '\t'))
		{
			l = 0;
			while (str[i + l] && (str[i + l] != ' ' && str[i + l] !=  '\t'))
				l++;
			split[j] = malloc(sizeof(char) * (l + 1));
			if (!split[j])
				return (NULL);
			k = 0;
			while (str[i] && (str[i] != ' ' && str[i] !=  '\t'))
				split[j][k++] = str[i++];
			split[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}

void	rostring(char *str)
{
	char **words = ft_split(str);
	int	end = count_words(str);
	int	i = 1;

	while (words[i] && i < end)
	{
		ft_putstr(words[i]);
		ft_putstr(" ");
		free(words[i]);
		i++;
	}
	ft_putstr(words[0]);
	free(words[0]);
	free(words);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	write (1, "\n", 1);
	return (0);
}

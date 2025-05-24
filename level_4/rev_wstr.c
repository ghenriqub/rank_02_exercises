/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:15:00 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/24 15:33:46 by ghenriqu         ###   ########.fr       */
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
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
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
		if (str[i] != ' ' && str[i] != '\t')
		{
			l = 0;
			while (str[i + l] && (str[i + l] != ' ' && str[i + l] != '\t'))
				l++;
			split[j] = malloc(sizeof(char) * (l + 1));
			if (!split[j])
				return (NULL);
			k = 0;
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
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

void	rev_wstr(char *str)
{
	char	**split = ft_split(str);
	int		end = count_words(str) - 1;
	
	while (end >= 0)
	{
		ft_putstr(split[end]);
		if (end > 0)
			ft_putstr(" ");
		free(split[end]);
		end--;
	}
	free(split);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		rev_wstr(argv[1]);
	}
	write (1, "\n", 1);
}

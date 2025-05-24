/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:23:26 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/24 13:00:42 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_words(char *str)
{
	int	i = 0, count = 0;

	while (str[i])
	{
		if (str[i] && (str[i] != ' ' && str[i] != '\t'))
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
	
	char	**split = malloc(sizeof(char *) * (ft_count_words(str) + 1));
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

int	main(int argc, char **argv)
{
	char	**result = ft_split(argv[1]);
	int		i = -1;

	while (result[++i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
	}
	free(result);
	return (0);
}

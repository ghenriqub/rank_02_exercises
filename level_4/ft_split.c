/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:23:26 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/15 15:38:52 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_words(char *str)
{
	int	i = 0, count = 0, trigger = 0;

	while (str[i])
	{
		if ((str[i] != 9 && str[i] != 32) && !trigger)
		{
			trigger = 1;
			count++;
		}
		else if (str[i] == 9 || str[i] == 32)
			trigger = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int		i = 0, j = 0, k, l = 0;
	
	char	**result = malloc(sizeof(char *) * (ft_count_words(str) + 1));
	if (!result)
		return (NULL);

	while (str[i])
	{
		while (str[i] == 9 || str[i] == 32)
			i++;
		if (!(str[i] == 9 || str[i] == 32))
		{
			l = 0;
			while (!(str[i + l] == 9 || str[i + l] == 32) && str[i + l])
				l++;
			result[j] = malloc(l + 1);
			if (!result[j])
				return (NULL);
			k = 0;
			while (!(str[i] == 9 || str[i] == 32) && str[i])
				result[j][k++] = str[i++];
			result[j][k] = '\0';
			j++;
		}
	}
	result[j] = NULL;
	return (result);
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

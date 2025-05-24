/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:42:23 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/16 08:10:26 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*list;
	int		i = 0;

	while (str[i])
		i++;
	list = malloc(sizeof(char) * (i + 1));
	if (!list)
		return (NULL);
	i = -1;
	while (str[++i])
		list[i] = str[i];
	list[i] = '\0';
	return (list);
}

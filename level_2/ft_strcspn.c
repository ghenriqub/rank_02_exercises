/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 14:12:19 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/11 16:03:03 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i = -1;
	size_t	j;

	while (s[++i])
	{
		j = -1;
		while (reject[++j])
		{
			if (s[i] == reject[j])
				return (i);
		}
	}
	return (i);
}

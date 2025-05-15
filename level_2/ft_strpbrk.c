/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:49:17 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/12 16:56:06 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = -1;
	int	j;

	while (s1[++i])
	{
		j = -1;
		while (s2[++j])
		{
			if (s1[i] == s2[j])
				return (s1[i]);
		}
	}
	return (NULL);	
}

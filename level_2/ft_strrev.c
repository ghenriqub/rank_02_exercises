/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:58:00 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/12 17:04:58 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i = -1;
	int		len = -1;
	char	temp;

	while (str[len++]);
	while (++i < (--len -1))
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
	}
	return (str);
}

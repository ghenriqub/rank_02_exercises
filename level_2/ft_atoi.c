/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:05:40 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/16 08:00:24 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	n = 1;
	int	i = 0;
	int	result;

	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				n = -1;
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
	    {
			result *= 10;
			result += str[i] - 48;
			i++;
		}
	}
	return (result * n);
}

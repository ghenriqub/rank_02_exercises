/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_power_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:59:26 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/13 12:07:01 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	int	mult = 1;

	while (mult <= n)
	{
		if (mult == n)
			return (1);
		mult *= 2;
	}
	return (0);
}

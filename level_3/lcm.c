/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:13:15 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/27 13:49:15 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_pgcd(unsigned int a, unsigned int b)
{
	if (b == 0)
		return (a);
	else
		return (ft_pgcd(b, a % b));
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (!a || !b)
		return (0);
	else
		return ((a * b) / ft_pgcd(a, b));
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		unsigned int m = lcm(atoi(av[1]), atoi(av[2]));
// 		printf("LCM: %u\n", m);
// 	}
// }
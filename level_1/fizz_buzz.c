/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:55:42 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/13 15:06:27 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main (int argc, char **argv)
{
	int	i = 1;

	while (i <= 100)
	{
		ft_putnbr(i);
		write(1, " - ", 3);
		if ((i % 3) == 0 && (i % 5) == 0)
			write(1, "fizzbuzz", 8);
		else if ((i % 3) == 0)
			write(1, "fizz", 4);
		else if ((i % 5) == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		i++;	
		write(1, "\n", 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:44:02 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/14 13:57:42 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0, result = 0, n = 1;

	while (str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = result + (str[i - '0']);
		i++;
	}
	return (result * n);
}

void	ft_puthex(int nbr)
{
	if (nbr >= 16)
		ft_puthex(nbr / 16);
	nbr = "0123456789abcdef"[nbr % 16];
	write(1, &nbr, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_puthex(ft_atoi(argv[1]));
	write (1, "\n", 1);
	return (0);
}

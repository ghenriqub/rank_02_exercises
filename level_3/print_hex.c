/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexcopy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:44:02 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/23 19:38:50 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int	ft_atoi(char *str)
{
	long int	i = 0, n = 1, result = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
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
		result += str[i] - '0';
		i++;
	}
	return (result * n);
}

void ft_putnbr_base(int n)
{
	if (n >= 16)
		ft_putnbr_base(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	n = ft_atoi(argv[1]);

		if (n < 0)
		{
			write (1, "-", 1);
			n *= -1;
		}
		ft_putnbr_base((int)n);
	}
	write(1, "\n", 1);
}

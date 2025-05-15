/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:14:26 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/14 17:28:17 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0, result = 0, n = 1;

	while (str[i] <= 32)
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

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr (n / 10);
	write (1, &"0123456789"[n % 10], 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	int	i = 1, n = ft_atoi(argv[1]);
	while (i < 10)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write (1, " = ", 3);
		ft_putnbr(i * n);
		write (1, "\n", 1);
		i++;
	}
}

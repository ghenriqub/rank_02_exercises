/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:14:26 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/23 19:55:48 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0, n = 1, result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (n * result);
}

void	ft_putnbr(int i)
{
	if (i < 0)
	{
		write (1, "-", 1);
		i *= -1;
	}
	if (i > 9)
		ft_putnbr(i / 10);
	write (1, &"0123456789"[i % 10], 1);
}

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 2)
	{
		int	n = ft_atoi(argv[i]);

		while (i <= 9)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(n);
			write (1, " = ", 3);
			ft_putnbr(n * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}

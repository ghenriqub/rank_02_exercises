/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:35:52 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/23 11:55:34 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int c, int baselen)
{
	char *lc = "0123456789abcdef";
	char *uc = "0123456789ABCDEF";
	int	i = 0;

	while (i < baselen)
	{
		if (c == lc[i] || c == uc[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res = 0, n = 1, i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] && is_valid(str[i], str_base))
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'z')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res * n);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi_base("1A", 16));   // 26
	printf("%d\n", ft_atoi_base("-2F", 16));  // -47
	printf("%d\n", ft_atoi_base("  +101", 2)); // 5
	printf("%d\n", ft_atoi_base("7B", 16));   // 123
}

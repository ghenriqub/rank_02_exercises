/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:35:52 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/14 10:45:01 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isvalid(int ch, int baselen)
{
    char *lcbase = "0123456789abcdef";
    char *ucbase = "0123456789ABCDEF";
    int i = 0;

    while (i < baselen)
    {
        if (ch == lcbase[i] || ch == ucbase[i])
            return (1);
        i++;
    }
    return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0, sign = 1, i = -1;

	while (str[++i] < 32);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
    while (str[i] && isvalid(str[i], str_base))
    {
        result *= str_base;
        
        if (str[i] >= '0' && str[i] <= '9')
            result += str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            result += str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            result += str[i] - 'A' + 10;
        i++;
    }
    return (result * sign);
}

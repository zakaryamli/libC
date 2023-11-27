/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:11:24 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/25 14:04:08 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handler(const char *str, int sign)
{
	int			i;
	long long	handler;
	long long	tmp;

	i = 0;
	handler = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = handler * 10 + (str[i] - 48); 
		if (tmp < handler && sign == 1)
			return (-1);
		if (tmp < handler && sign == -1)
			return (0);
		handler = tmp;
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (ft_handler(&str[i], sign) == -1)
		return (-1);
	if (ft_handler(&str[i], sign) == 0)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}

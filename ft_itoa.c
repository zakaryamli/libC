/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:07:02 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/18 14:35:24 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intsize(int nb)
{
	int		i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_copyf(int nb, char *str, int l)
{
	str[l] = '\0';
	while (l)
	{
		l--;
		str[l] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*result;
	int		len;

	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (nb < 0)
	{
		len = ft_intsize(-nb);
		result = malloc(sizeof(char) * len + 2);
		if (!(result))
			return (0);
		result[0] = '-';
		ft_copyf(-nb, result + 1, len);
	}
	else if (nb == 0)
		return (ft_strdup("0"));
	else
	{
		len = ft_intsize(nb);
		result = malloc(sizeof(char) * len + 1);
		if (!(result))
			return (0);
		ft_copyf(nb, result, len);
	}
	return (result);
}

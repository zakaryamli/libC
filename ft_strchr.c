/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:32:11 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/18 21:57:25 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*str;
	unsigned char	a;

	i = 0;
	str = (unsigned char *)s;
	a = (unsigned char)c;
	while (str[i])
	{
		if (str[i] == a)
			return ((char *)&str[i]);
		i++;
	}
	if (a == '\0')
		return ((char *)str + ft_strlen((char *)str));
	return (0);
}

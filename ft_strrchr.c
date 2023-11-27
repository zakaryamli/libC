/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:29:52 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/18 21:53:00 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	int		i;
	char	*str;
	char	*result;

	len = 0;
	i = 0;
	result = 0;
	str = (char *)s;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (str[i] == (unsigned char)c)
			result = &str[i];
		i++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:28:30 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/18 14:42:16 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*rs;

	i = 0;
	rs = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!rs)
		return (NULL);
	while (s1[i])
	{
		rs[i] = s1[i];
		i++;
	}
	rs[i] = '\0';
	return (rs);
}

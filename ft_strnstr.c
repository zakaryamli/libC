/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:20:41 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/18 14:14:31 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	index;
	char	*to_look;

	if (!haystack && len == 0 && needle)
		return (NULL);
	i = 0;
	to_look = (char *)haystack;
	index = 0;
	if (!needle[0] || haystack == needle)
		return (to_look);
	while (to_look[i] && i < len)
	{
		j = 0;
		while (to_look[i] == needle[j] && needle[j] && i++ < len)
			j++;
		if (needle[j] == '\0')
			return (&to_look[index]);
		index++;
		i = index;
	}
	return (NULL);
}

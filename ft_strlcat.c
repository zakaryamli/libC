/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:38:03 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/18 14:42:23 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_lenth;
	size_t	src_lenth;

	src_lenth = ft_strlen(src);
	if (!dst && dstsize == 0 && src)
		return (src_lenth);
	dst_lenth = ft_strlen(dst);
	i = 0;
	if (dst_lenth >= dstsize)
		return (dstsize + src_lenth);
	while (src[i] && i + dst_lenth < dstsize - 1)
	{
		dst[dst_lenth + i] = src[i];
		i++;
	}
	dst[i + dst_lenth] = '\0';
	return (dst_lenth + src_lenth);
}

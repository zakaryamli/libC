/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:29:50 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/20 16:33:08 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;
	long	a;
	long	b;

	a = count;
	b = size;
	if (a < 0 && b < 0)
		return (NULL);
	result = malloc(size * count);
	if (!result)
		return (0);
	ft_memset(result, 0, count * size);
	return (result);
}

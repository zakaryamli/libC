/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:52:47 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/18 13:57:50 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(struct s_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}

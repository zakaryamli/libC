/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:33:17 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/15 21:34:25 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*tmp;

	if (!lst || !del || !(*lst))
		return ;
	node = *lst;
	while (node)
	{
		tmp = node->next;
		ft_lstdelone(node, del);
		node = tmp;
	}
	(*lst) = NULL;
}

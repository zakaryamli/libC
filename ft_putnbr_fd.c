/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:26:52 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/18 21:44:16 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_toascii(int nb, int fd)
{
	char	str[10];
	int		i;

	i = 0;
	while (nb > 0)
	{
		str[i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	while (i--)
	{
		write(fd, &str[i], 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
		ft_toascii(n, fd);
	}
	else if (n == 0)
		write (fd, "0", 1);
	else
		ft_toascii(n, fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyamli <zakariayamli00@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:37:15 by zyamli            #+#    #+#             */
/*   Updated: 2023/11/18 14:36:10 by zyamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_leaks(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static int	count(const char *str, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			words++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (words);
}

static char	**count_allocate_char(char **strs, const char *s, char c)
{
	int		len;
	int		ptr_index;

	ptr_index = 0;
	while (*s)
	{
		len = 0;
		while ((*s) == c)
			s++;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		if (!len)
			break ;
		strs[ptr_index] = malloc((sizeof(char) * len + 1));
		if (strs[ptr_index] == NULL)
			return (free_leaks(strs));
		ft_strlcpy(strs[ptr_index], s - len, len + 1);
		ptr_index++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**splitedf;

	size = 0;
	if (s == NULL)
		return (NULL);
	size = count(s, c);
	splitedf = malloc(sizeof(char *) * (size + 1));
	if (!splitedf)
		return (NULL);
	if (count_allocate_char(splitedf, s, c) == NULL)
		return (NULL);
	splitedf[size] = NULL;
	return (splitedf);
}

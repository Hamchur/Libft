/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:51:30 by hamchur           #+#    #+#             */
/*   Updated: 2021/10/22 19:30:28 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < s)
		i++;
	while ((src[j]) && ((i + j + 1) < s))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != s)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

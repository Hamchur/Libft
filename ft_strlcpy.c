/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:53:27 by hamchur           #+#    #+#             */
/*   Updated: 2021/10/20 16:41:59 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsts)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dsts == 0)
		return (ft_strlen(src));
	if (dsts > 0)
	{
		while (src[j] && j < dsts - 1)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

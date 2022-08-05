/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:42:28 by hamchur           #+#    #+#             */
/*   Updated: 2021/10/15 13:58:38 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if ((!(dst)) && (!(src)))
	{
		return (NULL);
	}
	if (src < dst)
	{
		while (n--)
		{
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
		}
	}
	else if (src > dst)
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}

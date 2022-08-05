/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:38:37 by hamchur           #+#    #+#             */
/*   Updated: 2021/10/20 17:54:16 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	l;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	str = malloc((l + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[l] = '\0';
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

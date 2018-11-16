/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:36:50 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/16 15:29:03 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t n)
{
	char	*mysrc;
	size_t	sdest;

	mysrc = (char*)src;
	sdest = ft_strlen(dest);
	ft_strncat(dest, mysrc, n);
	if (n >= sdest)
	{
		return (sdest + strlen(mysrc));
	}
	else
	{
		return (n + strlen(mysrc));
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:47:01 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/08 19:29:55 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memmove(void *dest, const void *src, size_t len)
{
	int		i;
	char	*mysrc = (char *)src;

	if (dest > mysrc)
	{
		i = len - 1;
		while (len > 0)
		{
			((char *)dest)[i] = mysrc[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((char *)dest)[i] = mysrc[i];
			i++;
		}
	}
}

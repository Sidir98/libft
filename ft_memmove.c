/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:55:30 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/11 14:59:30 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int		i;
	char	*mysrc;

	mysrc = (char *)src;
	if (dest > src)
	{
		i = len - 1;
		while (i > 0)
		{
			((char *)dest)[i] = mysrc[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			((char *)dest)[i] = mysrc[i];
			i++;
		}
	}
	return (dest);
}

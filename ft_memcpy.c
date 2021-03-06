/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:01:34 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/26 12:03:40 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	long	*mysrc;
	long	*mydest;

	mysrc = (long*)src;
	mydest = (long*)dest;
	i = 0;
	while (i < (n / sizeof(long)))
	{
		mydest[i] = mysrc[i];
		i++;
	}
	i = (n / sizeof(long)) * sizeof(long);
	while (i < n)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (dest);
}

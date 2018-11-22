/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:01:34 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/18 17:36:14 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	k;
	char	*mysrc;
	char	*mydest;
	char	c;

	mysrc = (char*)src;
	mydest = (char*)dest;
	i = 0;
	k = 0;
	while (i < n / sizeof(char))
	{
		mydest[i] = mysrc[i];
		i++;
	}
	while (k < (n % 8))
	{
		c = mysrc[i] >> mydest[i];
		k++;
	}
	return (dest);
}

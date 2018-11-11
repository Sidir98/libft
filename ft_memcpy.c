/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:01:34 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/11 16:57:45 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*mysrc;

	mysrc = (char*)src;
	i = 0;
	while (i < (int)n)
	{
		((char *)dest)[i] = mysrc[i];
		i++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:50:35 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/15 16:04:00 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;
	int		k;
	char	*mysrc;

	mysrc = (char*)src;
	i = 0;
	k = 0;
	while (mysrc[i] != c && i < (int)n)
	{
		i++;
	}
	i++;
	while (i < (int)n)
	{
		((char *)dest)[k] = mysrc[i];
		k++;
		i++;
	}
	((char *)dest)[k] = '\0';
	return (dest);
}

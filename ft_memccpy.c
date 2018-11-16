/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:50:35 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/16 17:53:14 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;
	char	*mysrc;

	mysrc = (char*)src;
	i = 0;
	while (mysrc[i] != c && i < (int)n)
	{
		((char *)dest)[i] = mysrc[i];
		i++;
	}
	if (mysrc[i] == c)
		return (dest + (i));
	else
		return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:52:51 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/11 18:00:09 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *src, int c, size_t n)
{
	int		i;
	char	*mysrc;

	mysrc = (char*)src;
	i = 0;
	while (c != mysrc[i] && i < (int)n)
		i++;
	if (mysrc[i] == (unsigned char)c)
		return (mysrc + i);
	else
		return (0);
}

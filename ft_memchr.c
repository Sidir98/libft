/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:52:51 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/18 16:54:10 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t	i;
	char	*mysrc;

	mysrc = (char*)src;
	i = 0;
	while (i < n)
	{
		if (mysrc[i] == c)
			return (&mysrc[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:37:15 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/16 12:31:06 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*mys1;
	unsigned char	*mys2;

	mys1 = (unsigned char*)s1;
	mys2 = (unsigned char*)s2;
	i = 0;
	while (i < (int)n && mys1[i] == mys2[i])
	{
		i++;
	}
	return (mys1[i] - mys2[i]);
}

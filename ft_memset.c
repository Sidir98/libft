/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:31:42 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/08 19:29:58 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//a verifier

void	*ft_memset(void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		((char *)src)[i] = (char)c;
		i++;
	}
	return (src);
}

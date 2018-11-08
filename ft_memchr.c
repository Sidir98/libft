/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:52:51 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/08 20:06:50 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*a verifier*/
void	*memchr(const void *src, int c, size_t n)
{
	int		i;
	char	*mysrc;

	mysrc = (char*)src;
	i = 0;
	while (c != mysrc[i] && i < n)
		i++;
	if (mysrc[i] == c)
		return (mysrc[i]);
	else
		return (0);
}

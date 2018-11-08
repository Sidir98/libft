/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:01:34 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/08 18:09:26 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//a verifier
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	char *mysrc = (char *)src;

	i = 0;

	while (i < n)
	{
		((char *)dest)[i] = mysrc[i];
		i++;
	}
}

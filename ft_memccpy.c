/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:50:35 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/18 16:39:50 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	size_t	k;
	char	*mysrc;
	char	*mydest;
	char	letter;

	mysrc = (char*)src;
	mydest = (char*)dest;
	i = 0;
	k = 0;
	while (i < n / sizeof(char))
	{
		mydest[i] = mysrc[i];
		if (mysrc[i] == c)
			return (&mydest[i + 1]);
		i++;
	}
	while (k < (n % 8))
	{
		letter = mysrc[i] >> mydest[i];
		k++;
	}
	return (NULL);
}

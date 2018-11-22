/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:42:02 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/19 16:51:07 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = malloc(size)))
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

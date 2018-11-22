/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:51:45 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/21 23:03:41 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * size)))
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

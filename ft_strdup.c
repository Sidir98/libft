/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:22:07 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/26 13:14:28 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + 1))))
		return (NULL);
	ft_strcpy(dest, (char *)s1);
	return (dest);
}

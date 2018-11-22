/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:48:03 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/17 16:56:16 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	max;

	i = 0;
	j = 0;
	max = ft_strlen(to_find);
	if (max <= 0)
		return (str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < n)
		{
			j++;
			if (j == max)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

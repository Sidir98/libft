/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:30:27 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/16 11:19:38 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *src, char *dest, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	return (src[i] - dest[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:19:57 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/20 12:07:02 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mys1;
	char	*mys2;

	mys1 = (char*)s1;
	mys2 = (char*)s2;
	return (ft_strcat(ft_strcpy(ft_strnew(ft_strlen(mys1)\
	+ ft_strlen(mys2)), mys1), mys2));
}

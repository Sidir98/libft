/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:19:20 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/23 19:49:20 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrlst(t_list *m)
{
	while (m)
	{
		ft_putstr((char *)m->content);
		ft_putchar('\n');
		m = m->next;
	}
}

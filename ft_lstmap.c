/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:03:51 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/23 19:53:05 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *m;
	t_list *newm;

	m = lst;
	while (m != NULL)
	{
		ft_lstaddend(&newm, ft_lstnew(f(m)->content, f(m)->content_size));
		m = m->next;
	}
	return (newm);
}

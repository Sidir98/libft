/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:45:01 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/20 17:45:03 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_mesure_index(char *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while ((str[i] == c) && str[i])
		{
			i++;
		}
		if (str[i] != '\0')
		{
			while (str[i] != c && str[i])
			{
				i++;
			}
			j++;
		}
	}
	return (j);
}

char	**ft_fill_index(char **index, char *str, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while ((str[i] == c) && str[i])
		{
			i++;
		}
		if (str[i])
		{
			k = 0;
			while (str[i] != c && str[i])
				index[j][k++] = str[i++];
			index[j][k] = '\0';
			j++;
		}
	}
	return (index);
}

char	**ft_malloc_str(char **index, char *str, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while ((str[i] == c) && str[i])
		{
			i++;
		}
		if (str[i])
		{
			k = 0;
			while (str[i] != c && str[i])
			{
				k++;
				i++;
			}
			index[j++] = (char*)malloc(sizeof(char) * (k));
		}
	}
	return (index);
}

char	**ft_strsplit(char *str, char c)
{
	char	**index;
	int		j;

	j = ft_mesure_index(str, c);
	if (!(index = (char**)malloc(sizeof(char*) * (j + 1))))
		return (0);
	index[j] = 0;
	index = ft_malloc_str(index, str, c);
	return (ft_fill_index(index, str, c));
}
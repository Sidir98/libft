/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:22:12 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/16 15:33:23 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <string.h>

int		ft_atoi(char *str);
void	ft_bzero(void *src, size_t n);
void	*ft_memchr(const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *src, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, int nb);
int		ft_strncmp(char *src, char *dest, unsigned int n);
int		ft_strncmp(char *src, char *dest, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
#endif

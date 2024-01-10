/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:46:50 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/10 15:22:22 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int				ft_atoi(char *str);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(unsigned char c);
int				ft_isalpha(unsigned char c);
int				ft_isascii(unsigned char c);
int				ft_isdigit(unsigned char c);
int				ft_isprint(unsigned char c);
char			*ft_itoa(int nbr);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *ptr, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putendl(char const *s);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putstr(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(const char *str, int c);
void			ft_strdel(char **as);
char			*ft_strdup(char *src);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlen(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(char *haystack, char *needle, size_t len);
char			*ft_strrchr(const char *str, int c);
char			*ft_strrev(char *str);
char			*ft_strtrim(char const *s1, char const *set);
int				ft_tolower(int c);
int				ft_toupper(int c);
#endif
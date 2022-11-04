/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:45:27 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 17:51:27 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//bibliotecas necessárias
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>

//definir a estrutura
//typedef struct s_list
//{
//    void    *content;
//    struct s_list *next;
//}                 t_list;

//prototipos
//is de ctype.h
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);

int			ft_tolower(int c);
int			ft_toupper(int c);

//funcoes string.h
char		*ft_strchr(const char *s, int c);
size_t		ft_strlcat(char *destino, char *source, size_t size);
size_t		ft_strlcpy(char *dest, char *source, size_t len);
int			ft_strlen(const char *string);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strnstr(const char *str, const char *str2, size_t lenght);
char		*ft_strrchr(const char *s, int c);

//numeros
int			ft_atoi(char *string);
int			*ft_itoa(int n);

//mem
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);

#endif

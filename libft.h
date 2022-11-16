/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:45:27 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/15 14:44:29 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//bibliotecas necessárias
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>

//estrutura do bonus
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

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
char		*ft_strdup(const char *s);

//numeros
int			ft_atoi(char *string);
void		ft_bzero(void *s, size_t n);

//mem
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

//functions outside libc

void		*ft_calloc(size_t nmemb, size_t size);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *c, int fd);
char		*ft_itoa(int n);
char		*ft_strjoin(const char *s1, const char *s2);
void		ft_putendl_fd(char *s, int fd);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		**ft_split(char const *s, char c);

//listas e structs
t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 00:34:41 by imendonc          #+#    #+#              #
#    Updated: 2022/10/28 00:34:41 by imendonc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#DIR_SRCS	= sources

SRCS		= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
				ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlcat.c\
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
				ft_strrchr.c ft_tolower.c ft_toupper.c ft_memmove.c\
				ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c

#conversao de ficheiros c em objectos
OBJS		= $(SRCS:.c=.o)

#definir qual o compiler
CC				= gcc
RM 				= /bin/rm -f
CFLAGS 		= -Wall -Wextra -Werror

NAME		= libft.a

#adiciona os .o a libft.a e cria caso nao exista
ARCHIVE			= ar -rc

#definir os comandos para não entraram em conflito com outros

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:			
			$(RM) $(OBJS)

fclean: 	clean
				$(RM) $(NAME)

re:				fclean all $(NAME)

.PHONY:		all clean fclean re 



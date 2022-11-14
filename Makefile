# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 00:34:41 by imendonc          #+#    #+#              #
#    Updated: 2022/11/10 15:52:26 by imendonc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#DIR_SRCS	= sources

SRCS		= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
				ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlcat.c\
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
				ft_strrchr.c ft_tolower.c ft_toupper.c ft_memmove.c\
				ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c\
				ft_bzero.c ft_calloc.c ft_strdup.c ft_putchar_fd.c\
				ft_putnbr_fd.c ft_putstr_fd.c ft_strjoin.c\
				ft_putendl_fd.c ft_substr.c ft_strtrim.c ft_strmapi.c\
				ft_striteri.c ft_itoa.c ft_split.c ft_lstnew.c\
				ft_lstlast.c ft_lstsize.c

#conversao de ficheiros c em objectos
OBJS		= $(SRCS:.c=.o)

BSRC		= ft_lstnew.c ft_lstlast.c

BOBJS		= $(BSRC:.c=.o)


#definir qual o compiler
CC				= gcc
RM 				= /bin/rm -f
CFLAGS 		= -Wall -Wextra -Werror

NAME		= libft.a

#adiciona os .o a libft.a e cria caso nao exista
ARCHIVE			= ar -rc

#definir os comandos para não entraram em conflito com outros
#so:
#			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
#			gcc -nostartfiles -shared -o libft.so $(OBJ)		
#
all:		$(NAME) $(BOBJS)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:			
			$(RM) $(OBJS) $(BOBJS)

fclean: 	clean
				$(RM) $(NAME)

re:				fclean all $(NAME)

bonus:		$(OBJS) $(BOBJS)

				ar rcs $(NAME) $(OBJS) $(BOBJS)
.PHONY:		all clean fclean re bonus 



# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsogalho <lsogalho@42.student.pt>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 16:29:05 by lsogalho          #+#    #+#              #
#    Updated: 2021/02/04 16:59:26 by lsogalho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.PHONY: all clean fclean re .c.o

libft.a: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

.c.o:
	${CC} -c ${CFLAGS} $< -I ${INCS} -o ${<:.c=.o} 

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all


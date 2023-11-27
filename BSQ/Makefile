# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 18:30:21 by lboulatr          #+#    #+#              #
#    Updated: 2022/07/27 18:39:18 by lboulatr         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC = main.c open_map.c split.c tools.c errors.c

NAME = bsq

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

${NAME}:
	gcc ${CFLAGS} -o ${NAME} ${SRC}

all: ${NAME}

clean:
	rm -f *.o

fclean:
	rm -f ${NAME}

re: fclean all

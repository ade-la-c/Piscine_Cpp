# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 15:47:51 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/08 15:52:25 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= bsp

SRCS			= main.cpp			\
				Fixed.cpp			\
				Point.cpp			\

OBJS			= ${SRCS:.cpp=.o}

CXX				= clang++

CXXFLAGS		= -Wall -Werror -Wextra -std=c++98 -I .

RM				= rm -f

all:			${NAME}

${NAME}:		${OBJS}
				${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re

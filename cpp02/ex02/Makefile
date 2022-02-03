# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/28 22:17:46 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/03 13:50:49 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= fixed3

SRCS			= main.cpp			\
				Fixed.cpp			\

OBJS			= ${SRCS:.cpp=.o}

CXX				= clang++

CXXFLAGS		= -Wall -Werror -Wextra -std=c++98 -I . #-g -fsanitize=address

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

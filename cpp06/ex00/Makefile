# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 19:08:44 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/18 19:40:23 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= convert

SRCS				= main.cpp			\
					# ScalarType.cpp		\

OBJS				= ${SRCS:.cpp=.o}

CXX					= c++

# CXXFLAGS			= -Wall -Werror -Wextra -Wno-unused-parameter -std=c++98 -I .
CXXFLAGS			= -Wall -Werror -Wextra -std=c++98 -I .

all:				${NAME}

${NAME}:			${OBJS}
					${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
					${RM} ${OBJS}

fclean:				clean
					${RM} ${NAME}

.PHONY:				all clean fclean re

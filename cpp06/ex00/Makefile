# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 19:08:44 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/19 20:25:09 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= convert

SRCS				= main.cpp			\

OBJS				= ${SRCS:.cpp=.o}

CXX					= c++

CXXFLAGS			= -Wall -Werror -Wextra -std=c++98 -I .

all:				${NAME}

${NAME}:			${OBJS}
					${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
					${RM} ${OBJS}

fclean:				clean
					${RM} ${NAME}

re:					fclean all

.PHONY:				all clean fclean re

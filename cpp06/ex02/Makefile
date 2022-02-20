# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 18:52:21 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/20 19:45:56 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= convert

SRCS				= main.cpp			\

OBJS				= ${SRCS:.cpp=.o}

CXX					= c++

CXXFLAGS			= -Wall -Werror -Wextra -Wno-unused-variable -std=c++98 -I . \
					#-g -fsanitize=address

all:				${NAME}

${NAME}:			${OBJS}
					${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
					${RM} ${OBJS}

fclean:				clean
					${RM} ${NAME}

re:					fclean all

.PHONY:				all clean fclean re

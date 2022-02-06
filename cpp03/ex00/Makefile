# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 11:48:31 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/06 14:17:56 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= claptrap

SRCS				= main.cpp			\
					ClapTrap.cpp		\

OBJS				= ${SRCS:.cpp=.o}

CXX					= clang++

CXXFLAGS			= -Wall -Werror -Wextra -std=c++98 -I .

RM					= rm -f

all:				${NAME}

${NAME}:			${OBJS}
					${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
					${RM} ${OBJS}

fclean:				clean
					${RM} ${NAME}

re:					fclean all

.PHONY:				all clean fclean re

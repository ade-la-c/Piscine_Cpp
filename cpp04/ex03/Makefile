# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 15:31:56 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/14 16:27:26 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= materia

SRCS				= main.cpp			\
					AMateria.cpp		\
					Character.cpp		\
					Cure.cpp			\
					Ice.cpp				\
					MateriaSource.cpp	\

OBJS				= ${SRCS:.cpp=.o}

CXX					= clang++

CXXFLAGS			= -Wall -Werror -Wextra -std=c++98 -I . #-fsanitize=address -g

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

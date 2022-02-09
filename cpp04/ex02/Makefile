# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 16:50:08 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/08 15:14:51 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= animal

SRCS				= main.cpp			\
					Animal.cpp			\
					Dog.cpp				\
					Cat.cpp				\
					WrongAnimal.cpp		\
					WrongCat.cpp		\
					Brain.cpp			\

OBJS				= ${SRCS:.cpp=.o}

CXX					= clang++

CXXFLAGS			= -Wall -Werror -Wextra -std=c++98 -I . #-fsanitize=address

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

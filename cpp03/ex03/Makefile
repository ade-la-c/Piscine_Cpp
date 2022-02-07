# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 02:21:56 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/07 14:14:10 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= diamondtrap

SRCS				= main.cpp			\
					ClapTrap.cpp		\
					ScavTrap.cpp		\
					FragTrap.cpp		\
					DiamondTrap.cpp		\

OBJS				= ${SRCS:.cpp=.o}

CXX					= clang++

CXXFLAGS			= -Wall -Werror -Wextra -Wshadow -std=c++98 -I .

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

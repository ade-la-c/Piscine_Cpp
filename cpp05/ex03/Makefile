# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 17:15:53 by ade-la-c          #+#    #+#              #
#    Updated: 2022/02/16 19:02:31 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= intern

SRCS				= main.cpp						\
					Bureaucrat.cpp					\
					Form.cpp						\
					ShrubberyCreationForm.cpp		\
					RobotomyRequestForm.cpp			\
					PresidentialPardonForm.cpp		\
					Intern.cpp						\

OBJS				= ${SRCS:.cpp=.o}

CXX					= clang++

CXXFLAGS			= -Wall -Werror -Wextra -std=c++98 -I . #-g -fsanitize=address -g

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

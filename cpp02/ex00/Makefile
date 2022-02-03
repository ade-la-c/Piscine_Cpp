# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 02:58:45 by ade-la-c          #+#    #+#              #
#    Updated: 2022/01/28 22:18:47 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= fixed1

SRCS			= main.cpp		\
				Fixed.cpp		\

OBJS			= ${SRCS:.cpp=.o}

CXX				= clang++

CXXFLAGS		= -Wall -Werror -Wextra -std=c++98 -I .

RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re

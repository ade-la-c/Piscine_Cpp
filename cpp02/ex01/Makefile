# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 12:58:42 by ade-la-c          #+#    #+#              #
#    Updated: 2022/01/28 22:18:37 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= fixed2

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

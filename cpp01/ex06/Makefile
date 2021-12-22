# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 10:07:32 by ade-la-c          #+#    #+#              #
#    Updated: 2021/12/22 02:47:18 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= karenFilter

SRCS			= main.cpp			\
				Karen.cpp			\

OBJS			= ${SRCS:.cpp=.o}

CXXFLAGS		= -Wall -Werror -Wextra -std=c++98 -I .

CXX				= clang++

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

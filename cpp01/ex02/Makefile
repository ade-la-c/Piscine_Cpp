# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 00:41:37 by ade-la-c          #+#    #+#              #
#    Updated: 2021/12/08 00:51:06 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= thisisbrain

SRCS			= main.cpp	\

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

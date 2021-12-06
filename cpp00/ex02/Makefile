# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 16:34:43 by ade-la-c          #+#    #+#              #
#    Updated: 2021/12/06 16:48:57 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= account

SRCS			= tests.cpp		\
				Account.cpp		\

OBJS			= ${SRCS:.cpp=.o}

CXXFLAGS		= -Wall -Werror -Wextra -std=c++98 -I .

RM				= rm -f

CXX				= clang++

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re

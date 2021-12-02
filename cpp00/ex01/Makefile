# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 16:16:39 by ade-la-c          #+#    #+#              #
#    Updated: 2021/12/02 02:55:58 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= phonebook

SRCS			= main.cpp			\
				PhoneBook.cpp		\
				Contact.cpp			\

OBJS			= ${SRCS:.cpp=.o}

CXXFLAGS		= -Wall -Werror -Wextra -std=c++98 -I . -g -fsanitize=address

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

.PHONY:			clean fclean all re

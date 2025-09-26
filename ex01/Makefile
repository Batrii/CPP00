# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnafiai <bnafiai@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 15:50:33 by bnafiai           #+#    #+#              #
#    Updated: 2025/09/03 15:50:33 by bnafiai          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Contact.cpp PhoneBook.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = PhoneBook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
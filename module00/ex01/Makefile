# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 16:13:03 by areheman          #+#    #+#              #
#    Updated: 2022/10/26 16:57:26 by areheman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
GCC = g++
CFLGAC = -Wall -Wextra -Werror -std=c++98
#fsanitize=address
#-std=c++98

SRCS = main.cpp Contact.cpp

OBJS = ${SRCS:.cpp=.o}

all:$(NAME)

$(NAME): $(OBJS)
		$(GCC) $(CFLAGS) $^ -o $@

.cpp.o:
		$(GCC) $(CFLAGS) -c $< -o ${<:.cpp=.o}
clean :
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: clean fclean all
.PHONY: re clean fclean all 
	
	
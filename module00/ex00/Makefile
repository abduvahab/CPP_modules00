# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 11:11:08 by areheman          #+#    #+#              #
#    Updated: 2022/10/27 11:11:44 by areheman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
GCC = g++
CFLGAC = -Wall -Wextra -Werror -std=c++98
#fsanitize=address
#-std=c++98

SRCS = megaphone.cpp

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/19 15:11:45 by bmelo             #+#    #+#              #
#    Updated: 2026/11/21 22:06:37 by bmelo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp
OBJ = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} -o ${NAME} ${OBJ}

clean :
	rm -f ${OBJ}
fclean : clean
	rm -f ${NAME}
re : fclean all
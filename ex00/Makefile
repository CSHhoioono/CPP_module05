# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/09 10:07:24 by soochoi           #+#    #+#              #
#    Updated: 2026/03/09 11:05:40 by soochoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

HEADER_DIR = ./include/
HEADER_LIST = Bureacrat.hpp
HEADER = $(addprefix $(HEADER_DIR), $(HEADER_LIST))

CXX = c++
FLAGS = -Wall -Wextra -Werror -g
VERSION_FLAG = -std=c++98
INCLUDE = -I$(HEADER_DIR)

SRCS_DIR = ./srcs/
SRCS_LIST = Bureacrat.cpp
SRCS = $(addprefix $(SRCS_DIR), $(SRCS_LIST))

MAIN = $(addprefix $(SRCS_DIR), main.cpp)

OBJS_DIR = ./objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS_LIST:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS_DIR) $(OBJS) $(MAIN)
	$(CXX) $(FLAGS) $(VERSION_FLAG) $(INCLUDE) $(OBJS) $(MAIN) -o $@

$(OBJS_DIR) : $(SRCS_DIR)
	@if [ ! -d "$(OBJS_DIR)" ]; then\
		mkdir -p $@;\
	fi

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp $(HEADER)
	$(CXX) $(FLAGS) $(VERSION_FLAG) $(INCLUDE) -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
